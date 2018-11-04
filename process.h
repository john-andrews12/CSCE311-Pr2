#ifndef PROC_H
#define PROC_H

#include <iostream>

const std::string DEFAULT_NAME = "Default";
const int DEFAULT_PRIORITY = 1;
const double DEFAULT_TIME = 5.0;

class Process {
  public:
    //constructor and destructor
    Process();
    Process(std::string name, int priority, double time);
    virtual ~Process();
    
    //public methods
    std::string ToString();
    int SetPriority(int input);
    int SetTime(double input);
    int SetName(std::string input);
    int GetPriority();
    double GetTime();
    std::string GetName();
    bool IsNull();

  private:
    int priority_;
    double time_;
    std::string name_;
    bool null_;
};

#endif
