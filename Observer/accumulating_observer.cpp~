// Implementation of accumulating observer
 
#include "accumulating_observer.h" 
#include <iostream>
#include <string> 
#include <vector>  

 

void AccumulatingObserver::update(Observable* obs) {    

  // get state, save state

  char state = obs->get_state();    
  upperCase.push_back(state); 

  } 
 
void AccumulatingObserver::show_data() {    

  // get output

  std::cout << "Uppers: ";    
  for (int index = 0; index < upperCase.size(); ++index)        
  std::cout << upperCase[index];   
  std::cout << "\n"; 

} 
