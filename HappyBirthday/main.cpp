// Karina Hernandez
// CECS 282- 01
// Prog 0 - Happy Birthday
// 8/25/2021

#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int age;
  int birthYear;
  char thisYear;
  cout << "What is your name? ";
  cin >> name;
  cout << "How old are you " <<name<<"? ";
  cin >> age;
  cout << name << ", have you had your birthday yet this year?? (y/n) ";
  cin >> thisYear;

  if (thisYear == 'y' || thisYear == 'Y')
          birthYear = 2021 - age;
  else
          birthYear = 2021 - age - 1;
  cout << endl;
  cout << "Hi " << name << "!!!\n\nI guess that you were born in " << birthYear << endl;
  cout << "\n\nPress 'Enter' to continue.";

  getchar();
  getchar();

  return 0;

}
