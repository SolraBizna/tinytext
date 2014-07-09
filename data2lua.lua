if #arg ~= 2 then
   print("usage: data2lua input.data.json output.data.lua")
   os.exit(1)
end

local font = assert(io.open(arg[1],"rb")):read("*a")
local out = assert(io.open(arg[2],"wb"))
out:write("return "..font:gsub("\"([a-z]+)\":", "%1="):gsub("=%[","={"):gsub("]}","}}"))
