// Definition of counting observer 
 
#ifndef COUNTING_OBSERVER 
#define COUNTING_OBSERVER  
#include "observer.h" 
#include "observable.h" 
#include <iostream> 
#include <vector>  


class CountingObserver : public Observer { 
  
 public:    
  CountingObserver() : upperIndex(0) { }     
  virtual void update(Observable*);     
  void show_data();    
 private:
  int  upperIndex; 

}; 

#endif 
