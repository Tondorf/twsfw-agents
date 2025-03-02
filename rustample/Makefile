default: build

build:
	cargo build --release --target wasm32-unknown-unknown
	wasm-opt -O3 --remove-imports --debuginfo target/wasm32-unknown-unknown/release/rustample.wasm -o rustample.wasm

clean:
	rm rustample.wasm

.PHONY: default clean
