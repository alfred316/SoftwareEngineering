// Implementation of counting observer

#include "counting_observer.h" 
#include <iostream> 
#include <string> 
#include <vector>  

using std::cin; 
using std::cout; 
using std::string; 
using std::vector; 
 

void CountingObserver::update(Observable*) {   
 
  // Don't care about state from observable 
   
  ++upperIndex;
 }  



void CountingObserver::show_data() {   
 
  // Output    
  cout << "Upper count: " << upperIndex << "\n"; 

} 


