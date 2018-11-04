GPP = g++ -O3 -Wall -std=c++11

A = process_simulator.o
B = process_heap.o
D = process.o

Aprog: $A $B $D
	$(GPP) -o Aprog $A $B $D

process_simulator.o: process_simulator.h process_simulator.cc
	$(GPP) -c process_simulator.cc

process_heap.o: process_heap.h process_heap.cc
	$(GPP) -c process_heap.cc

process.o: process.h process.cc
	$(GPP) -c process.cc

clean:
	rm ./*.o ./Aprog
