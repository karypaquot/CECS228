//Steven Nguyen
//Karina Hernandez
//Steven Ung
// CECS 282 - 03
// Week 2, Lab 2
// 9/1/2021


#include <iostream>
#include "Can.h"
#include <string>
#include <array>
using namespace std;

void function(Can cans[]) { 
  int total = 0;
  for( int ii = 0; ii < 6; ii++) {
    cans[ii].display();
  }
  for(int ii = 0; ii < 6; ii++){
    total += cans[ii].getWeight();
  }
  cout << "Total Weight of All Cans: " << total << " ounces";
  
}

int main() {
  //initializes cans
  Can coke("Coke", 12);
  Can mango("Mango Monster Energy Drink", 16);
  Can red("Red Bull", 8);
  Can bang("Bang!", 16);
  Can venom("Venom Energy", 16);
  Can jolt("Jolt Cola", 12); 

  //Array for cans
  Can cans[6] = {coke, mango, red, bang, venom, jolt};

  function(cans);

}
