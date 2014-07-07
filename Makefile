all: tinytext.data.json tinytext.decoder.json

tinytext.data.json: mkdata.scg tinytext.chars.txt tinytext.png
	lua $^ $@

tinytext.decoder.json: mkdecoder.scg tinytext.data.json tinytext.png
	lua $^ $@

clean:
	rm -f *.*.json *.*.h *.*.lua

