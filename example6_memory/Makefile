all:
	wat2wasm memory.wat 
	wasm-objdump -x memory.wasm
	python3 -mhttp.server 10003

clean:
	-rm memory.wasm