default: goxample.wasm

%.wasm: %.go
	#GOOS=wasip1 GOARCH=wasm go build -o $@
	tinygo build -target=wasip1 -o $@ $<
	wasm-opt --remove-imports $@ -o $@

clean:
	rm goxample.wasm

.PHONY: default clean
