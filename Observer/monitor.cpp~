// observed monitor implimented here 
  
#include "monitor.h" 
#include <iostream> 
#include <vector> 
 
 

// impliment observer

void UpperCaseMonitor::notify() {     
  for (std::vector<Observer *>::iterator it = obsObj.begin(); 
       it != obsObj.end(); 
       ++it)       
    (*it)->update(this); 
}  


 
void UpperCaseMonitor::attach(Observer* obs) {  
  obsObj.push_back(obs); 
}  

void UpperCaseMonitor::detach(Observer* obs) { 
  int count = obsObj.size();
  int i;
  for(i=0; i<count; i++){
    if(obsObj[i] == obs)
      break;
  }
  if(i<count)
    obsObj.erase(obsObj.begin()+i);
    }  
char UpperCaseMonitor::get_state() {
  return currentState; 
}  

void UpperCaseMonitor::set_state(char newState) {
  currentState = newState; 
}  

void UpperCaseMonitor::watch(char chr) {
  if (isupper(chr))   {
    set_state(chr);
       notify();
  }
} 


