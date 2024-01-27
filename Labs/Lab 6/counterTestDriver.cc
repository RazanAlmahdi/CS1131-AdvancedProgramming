#include <iostream>
#include "counterType.h"

using namespace std;

int main(){
  //varibles
  int num;
  counterType count1;

  cout << "Enter a number: ";
  cin >> num; //inputting a number
  cout << endl;

  count1.setCounter(num); //setting the counter

  cout << "The counter you entered is: " << count1.getCounter() << endl; //getting the counter
  cout << "The value of counter after increamenting is: " << count1.increament() << endl; //increamenting the counter
  cout << "The value of counter after decreamenting is: " << count1.decreament() << endl; //decreamenting the counter

  count1.print(); //printing the final value of count

  return 0;
}
