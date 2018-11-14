GPP = g++ -O3 -Wall -std=c++11

A = process_simulator.o
B = process_heap.o
D = process.o
H = hello_world.o
I = input.o
F = square.o
U = uninit.o

ProcSim: $A $B $D
	$(GPP) -o ProcSim $A $B $D

process_simulator.o: process_simulator.h process_simulator.cc
	$(GPP) -c process_simulator.cc

process_heap.o: process_heap.h process_heap.cc
	$(GPP) -c process_heap.cc

process.o: process.h process.cc
	$(GPP) -c process.cc

HelloWorld: $H
	$(GPP) -o HelloWorld $H

hello_world.o: hello_world.cc
	$(GPP) -c hello_world.cc

HelloOb:
	g++ -g hello_world.cc -o HelloOb

InputTest: $I
	$(GPP) -o InputTest $I

input.o: input.cc
	$(GPP) -c input.cc

InputOb:
	g++ -g input.cc -o InputOb

FunctionTest: $F
	$(GPP) -o FunctionTest $F

square.o: square.cc
	$(GPP) -c square.cc

FunctionOb:
	g++ -g -std=c++11 square.cc -o FunctionOb

UnInit: $U
	$(GPP) -o UnInit $U

uninit.o: uninit.cc
	$(GPP) -c uninit.cc

trying: 
	g++ -g uninit.cc -o trying

ArrayOb:
	g++ -g array_sum.cc -o ArrayOb

clean:
	rm ./*.o ./ArrayOb ./ProcSimi ./Hello* ./Input* ./Function* ./UnInit ./trying
