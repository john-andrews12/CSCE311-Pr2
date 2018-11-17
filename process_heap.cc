#include "process_heap.h"

ProcessHeap::ProcessHeap(){
	this->heap_ = new Process[DEFAULT_HEAP_SIZE];
	this->last_index_ = 0;
	this->size_ = DEFAULT_HEAP_SIZE;
}
ProcessHeap::ProcessHeap(int size){
	if (size > 0) {
		this->heap_ = new Process[size];
		this->size_ = size;
	}
	else {
		this->heap_ = new Process[DEFAULT_HEAP_SIZE];
		this->size_ = DEFAULT_HEAP_SIZE;
	}
	this->last_index_ = 0;
}
ProcessHeap::~ProcessHeap(){
	
}

//public methods
int ProcessHeap::Insert(Process pin){
	if (this->last_index_ < this->size_) {
		this->heap_[this->last_index_] = pin;
		this->BubbleUp();
		this->last_index_++;
	}

	return 0;
}
Process ProcessHeap::Peek(){
	if (last_index_ > 0)
	{
		return this->heap_[0];
	}
	else {
		return Process("",-1,0);
	}
}
Process ProcessHeap::Remove(){
	Process ret;
	if (this->last_index_ > 0)
	{
		ret = this->heap_[0];
		
		this->heap_[0] = this->heap_[this->last_index_-1];
		this->heap_[this->last_index_-1] = Process("",-1,0);
		this->last_index_--;
		this->BubbleDown();
	}
	else {
		ret = Process("",-1,0);
	}
	
	return ret;
}
int ProcessHeap::PrintHeap(){
	for (int i = 0; i < this->last_index_; ++i) {
		std::cout << this->heap_[i].ToString() << std::endl;
	}

	return 0;
}
bool ProcessHeap::IsEmpty(){
	if (this->last_index_ == 0) {
		return true;
	}
	else {
		return false;
	}
}
int ProcessHeap::HeapSort(){
	for (int i = 0; i < this->last_index_; ++i) {
		std::cout << this->Remove().ToString() << std::endl;
	}
	this->last_index_ = 0;

	return 0;
}

//private methods
int ProcessHeap::BubbleUp() {
	int index = this->last_index_;
	
	while (index > 0)
	{
		if (this->heap_[index].GetPriority() > this->heap_[(index-1)/2].GetPriority()) {
			Process temp = this->heap_[index];
			this->heap_[index] = this->heap_[(index-1)/2];
			this->heap_[(index-1)/2] = temp;
			index = (index-1)/2;
		}
		else {
			break;
		}
	}
	
	return 0;
}

int ProcessHeap::BubbleDown() {
	int index = 0;
	
	while (index*2+1 < this->last_index_) {
		int largerIndex = index*2+1;
		if (this->heap_[largerIndex].GetPriority() < this->heap_[largerIndex+1].GetPriority()) {
			largerIndex++;
		}
		
		//std::cout << "index: " << index << " val: " << this->heap_[index].GetPriority() << "; largerIndex: " << largerIndex << " val: " << this->heap_[largerIndex].GetPriority() << std::endl;
		
		if (this->heap_[index].GetPriority() < this->heap_[largerIndex].GetPriority()) {
			//swap
			//std::cout << "swapping" << std::endl;
			Process temp = this->heap_[index];
			this->heap_[index] = this->heap_[largerIndex];
			this->heap_[largerIndex] = temp;
			index = largerIndex;
		}
		else {
			break;
		}
	}
	
	return 0;
}
