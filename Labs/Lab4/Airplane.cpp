#include "Airplane.h"
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>

using namespace std; 


Airplane::Airplane() {
  altitude = 0;
  minAltitude = 500;
  maxAltitude = 1000;
}

Airplane::Airplane(string m) {
  model = m;
}

void Airplane::display() {
  cout << "Model: " << model << " Altitude: " << altitude << endl;
}



void Airplane:: setAltitude(){
  altitude = 500 + (rand() % 500 + 1); // rand num from 500 - 1000
}

bool Airplane::crash(Airplane plane){
  if (std::abs(altitude - plane.altitude) <= 200){
    return true;
  }
  return false;
}
