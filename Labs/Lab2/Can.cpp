#include "Can.h"
#include <iostream>
using namespace std;

Can::Can()
{
    contents = "empty";
    volume = 0;
}

Can::Can(string c, int v)
{
    contents = c;
    volume = v;
}

void Can::display()
{
  cout << volume << " ounce can of " << contents << endl;
}
int Can::getWeight() 
{
  return volume;
}




