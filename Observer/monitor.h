// monitor.h  

#ifndef _UPPER_CASE_MONITOR 
#define _UPPER_CASE_MONITOR  
#include "observer.h" 
#include "observable.h" 
#include <vector>  



class UpperCaseMonitor : public Observable {

 public:     
  UpperCaseMonitor() : currentState(0) { }     
  virtual void notify();     
  virtual void attach(Observer* obs);
  virtual void detach(Observer* obs);     
  virtual char get_state();     
  virtual void set_state(char newState);     
  void         watch(char);    
 private:     
  std::vector <Observer*> obsObj;              
  char currentState;
 };  

#endif 


