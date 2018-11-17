GPP = g++ -O3 -Wall -std=c++11

ProcSimOb:
	g++ -g -std=c++11 process_simulator.cc process_heap.cc process.cc -o ProcSimOb

HelloOb:
	g++ -g hello_world.cc -o HelloOb

InputOb:
	g++ -g input.cc -o InputOb

FunctionOb:
	g++ -g -std=c++11 square.cc -o FunctionOb

ArrayOb:
	g++ -g array_sum.cc -o ArrayOb

ArrayUnOb:
	g++ -g array_sum_un.cc -o ArrayUnOb

ExternIntOb:
	g++ -g extern_int.cc -o ExternIntOb

clean:
	rm ./Array* ./ProcSimOb ./ExternIntOb ./HelloOb ./InputOb ./FunctionOb
