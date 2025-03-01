default: goxample.wasm

%.wasm: %.go
	#GOOS=wasip1 GOARCH=wasm go build -o $@
	tinygo build -target=wasi -o $@ $<

clean:
	rm goxample.wasm

.PHONY: default clean
