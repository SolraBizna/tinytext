if #arg ~= 3 then
   print("usage: decoder2h input.decoder.lua output.decoder.h fontname")
   os.exit(1)
end

local decoder = assert(dofile(arg[1]))
local out = assert(io.open(arg[2],"wb"))
local function outf(format,...) return out:write(format:format(...)) end

outf([[
struct %s_decoder_node {
  char c; // if non-zero, terminate decoding and guess this char
  // otherwise, test the pixel given by x,y and descend according to the result
  int x, y;
  struct %s_decoder_node* t, *f;
};
]], arg[3], arg[3])

local function output_decoder(name, dec)
   if dec.t then output_decoder((name or "").."t", dec.t) end
   if dec.f then output_decoder((name or "").."f", dec.f) end
   outf("static const struct %s_decoder_node %s_decoder_%s = {",
        arg[3], arg[3], name or "root")
   if type(dec) == "string" then
      outf("'%s',0,0,NULL,NULL",dec)
   else
      outf("0,%i,%i,&%s_decoder_%st,&%s_decoder_%sf",dec.x,dec.y,arg[3],name or "",arg[3],name or "")
   end
   outf("};\n")
end

output_decoder(nil, decoder)
