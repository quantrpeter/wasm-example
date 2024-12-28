all:
	clang++-mp-19 --target=wasm32 -nostdlib -Wl,--no-entry -Wl,--export-all printFib.c -o printFib.wasm
	wasm-objdump -x printFib.wasm
	python3 -mhttp.server 10003

clean:
	-rm howold.wasm
