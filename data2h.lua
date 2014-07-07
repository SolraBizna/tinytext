local cjson = require "cjson"

if #arg ~= 3 then
   print("usage: data2h input.data.json output.data.h fontname")
   os.exit(1)
end

local font = assert(cjson.decode(assert(io.open(arg[1],"rb")):read("*a")))
local out = assert(io.open(arg[2],"wb"))
local function outf(format,...) return out:write(format:format(...)) end

outf([[
struct %s_char {
  char c;
  int x, y, w;
};
]], arg[3])
outf([[
static const struct %s_data {
  int h, char_count;
  struct %s_char chars[%i];
} %s_data = { %i, %i,
]], arg[3], arg[3], #font.chars, arg[3], font.h, #font.chars)
for n=1,#font.chars do
   local char = font.chars[n]
   outf("  {'%s', %i, %i, %i},\n", char.char, char.x, char.y, char.w);
end
outf("};\n")
