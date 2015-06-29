if #arg ~= 3 then
   print("usage: data2h input.data.lua output.data.h fontname")
   os.exit(1)
end

local font = assert(dofile(arg[1]))
local out = assert(io.open(arg[2],"wb"))
local function outf(format,...) return out:write(format:format(...)) end

outf([[
struct %s_char {
  char c;
  short x, y, w;
};
]], arg[3])
outf([[
static const struct %s_data {
  short h, char_count;
  struct %s_char chars[%i];
} %s_data = { %i, %i, {
]], arg[3], arg[3], #font.chars, arg[3], font.h, #font.chars)
for n=1,#font.chars do
   local char = font.chars[n]
   outf("  {'%s', %i, %i, %i},\n", char.char == "\\" and "\\\\" or char.char, char.x, char.y, char.w);
end
outf("}};\n")
