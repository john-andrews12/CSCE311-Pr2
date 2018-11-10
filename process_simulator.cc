#include "process_simulator.h"
#include <unistd.h>

#define A_WORD "a word"

const int HEAP_SIZE = 100;
const int SIM_TIME = 2500000;
const std::string HEY_WORLD = "hello world";
int dummy = 120;
std::string NOT_CONST = "Goodbye world!";

int main(int argc, char *argv[]) {
	int not_set;
	ProcessHeap heap = ProcessHeap(HEAP_SIZE);
	//Make initial heap
	heap.Insert(Process("a",10,50));
	heap.Insert(Process("b",5,20));
	heap.Insert(Process("c",20,18));
	heap.Insert(Process("d",18,29));
	heap.Insert(Process("e",33,23));
	heap.Insert(Process("f",1,15));
	heap.Insert(Process("g",16,5));
	
	std::cout << "The current heap is:" << std::endl;
	heap.PrintHeap();
	
	//ProcessHeap.heapSort(heap);
	
	std::cout << "Starting simulation" << std::endl;
	//Simulation
	//heap.Remove();
	//heap.PrintHeap();
	
	Process currProcess = Process("",-1,0);
	double currProcessTime = 0.0;
	for (int i=0; i<SIM_TIME; i++) {
		if (currProcess.IsNull()) {
			if (heap.IsEmpty()) {
				std::cout << "Waiting for new processes" << std::endl;
			}
			else {
				currProcess = heap.Remove();
				std::cout << "Process: " + currProcess.ToString() + " is starting" << std::endl;
				currProcessTime = currProcess.GetTime();
			}
		}
		else if (currProcessTime > 0.0) {
			currProcessTime--;
		}
		else {
			std::cout << "Process: " + currProcess.ToString() + " has ended" << std::endl;
			currProcess = Process("",-1,0);
		}
		
		//New process added
		if (i % 50 == 0 && i != 0) {
			Process randomProcess = Process("Random Process "+std::to_string(i),i/5,i/5); 
			heap.Insert(randomProcess);
			std::cout << "Random process added! " + randomProcess.ToString() << std::endl;
		}
		usleep(1000);
	}
	std::cout << "Simulation time has expired" << std::endl;
	return 0;
}
