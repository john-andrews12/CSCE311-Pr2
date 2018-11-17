#include "process.h"

Process::Process() {
	this->priority_ = DEFAULT_PRIORITY;
	this->time_ = DEFAULT_TIME;
	this->name_ = DEFAULT_NAME;
	this->null_ = false;
}
Process::Process(std::string name, int priority, double time) {
	this->null_ = false;
	this->SetPriority(priority);
	this->SetTime(time);
	this->SetName(name);
}
Process::~Process() {
	
}

//public methods
std::string Process::ToString() {
	return "Name: " + this->name_ + ", Priority: " + std::to_string(this->priority_) + ", Time: " + std::to_string(this->time_);
}
int Process::SetPriority(int input) {
	if (input > 0) {
		this->priority_ = input;
	}
	else {
		this->null_ = true;
		this->priority_ = DEFAULT_PRIORITY;
	}
	
	return 0;
}
int Process::SetTime(double input) {
	if (input > 0) {
		this->time_ = input;
	}
	else {
		this->time_ = DEFAULT_TIME;
	}
	
	return 0;
}
int Process::SetName(std::string input) {
	this->name_ = input;
	
	return 0;
}
int Process::GetPriority() {
	return this->priority_;
}
double Process::GetTime() {
	return this->time_;
}
std::string Process::GetName() {
	return this->name_;
}
bool Process::IsNull() {
	return this->null_;
}
