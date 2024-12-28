all:
	#llc-mp-19 --version
	clang++-mp-19 --target=wasm32 -nostdlib -Wl,--no-entry -Wl,--export-all howold2.c -o howold.wasm
	#wasm3 howold.wasm
	wasm-objdump -x howold.wasm
	python3 -mhttp.server 10003

clean:
	-rm howold.wasm
