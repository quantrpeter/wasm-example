all: hello.js

hello.js: hello.c
	emcc $? -o $@

clean:
	rm -fr hello.js
	rm -fr hello.wasm

run:
	python3 -mhttp.server 10003