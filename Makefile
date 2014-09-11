all: \
tinytext.data.json tinytext.decoder.json \
tinytext.data.h tinytext.decoder.h \
tinytext.data.lua tinytext.decoder.lua \
tinytext.pixels.h \
tinytext_mixed.data.json tinytext_mixed.decoder.json \
tinytext_mixed.data.h tinytext_mixed.decoder.h \
tinytext_mixed.data.lua tinytext_mixed.decoder.lua \
tinytext_mixed.pixels.h

%.data.json: mkdata.scg %.chars.txt %.png
	lua $^ $@
%.data.h: data2h.lua %.data.lua
	lua $^ $@ $*
%.data.lua: data2lua.lua %.data.json
	lua $^ $@

%.decoder.json: mkdecoder.scg %.data.lua %.png
	lua $^ $@
%.decoder.h: decoder2h.lua %.decoder.lua
	lua $^ $@ $*
%.decoder.lua: decoder2lua.lua %.decoder.json
	lua $^ $@

%.pixels.h: pixels2h.scg %.png
	lua $^ $@ $*

clean:
	rm -f *.*.json *.*.h *.*.lua

