package main

import "fmt"

//#include "../example/twsfw_agent.h"
import "C"

//go:wasm-module goxample
//export twsfw_agent_act
func twsfw_agent_act(agents *C.struct_twsfw_agent, n_agents uint32,
	missiles *C.struct_twsfw_missile, n_missiles uint32,
	world *C.struct_twsfw_world, id int32,
	action *int32) float32 {
	return 10
}

func main() {
	fmt.Println("Hello, WebAssembly!")
}
