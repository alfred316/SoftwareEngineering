// Definition of accumulating observer 
 
#ifndef ACCUMULATING_OBSERVER 
#define ACCUMULATING_OBSERVER  
#include "observer.h" 
#include "observable.h" 
#include <iostream> 
#include <vector>  



class AccumulatingObserver : public Observer {   
 public:     virtual void update(Observable*);     
  void show_data();    
 private:     std::vector<char> upperCase; 
};  

#endif 


