// Alfred Shaker
// counting_observer.cpp
// cs33901


#include "counting_observer.h" 
#include <iostream> 
#include <string> 
#include <vector>  

using std::cin; 
using std::cout; 
using std::string; 
using std::vector; 
 

void CountingObserver::update(Observable*) {   
 
  // keep track of the upper case letters
   
  ++upperIndex;
 }  



void CountingObserver::show_data() {   
 
  // Output    
  cout << "Upper count: " << upperIndex << "\n"; 

} 


