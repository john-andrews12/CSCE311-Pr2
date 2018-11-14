#ifndef PHEAP_H
#define PHEAP_H

#include <iostream>
#include <vector>

#include "process.h"

const int DEFAULT_HEAP_SIZE = 64;

class ProcessHeap {
	public:
		//constructor and destructor
		ProcessHeap();
		ProcessHeap(int size);
		virtual ~ProcessHeap();
		
		//public methods
		int Insert(Process pin);
		Process Peek();
		Process Remove();
		int PrintHeap();
		bool IsEmpty();
		int HeapSort();

	private:
		Process* heap_;//[DEFAULT_HEAP_SIZE];
		int size_;
		int last_index_;
		
		int BubbleUp();
		int BubbleDown();
};

#endif
