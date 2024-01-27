#include <iostream>
#include "counterType.h"
using namespace std;

counterType::counterType(){
  counter = 0;
} //default constructor
void counterType::setCounter(int count){
  if (count >= 0){
      counter = count;
  }
  else{
    counter = 0;
  }
} //setting counter
int counterType::getCounter(){
  return counter;
} //getter counter
int counterType::increament(){
  return ++counter;
} //increament counter
int counterType::decreament(){
  if(counter == 0 ){
    return counter;
  }
  else{
    return --counter;
  }
}//decreament counter
void counterType::print() const{
  cout << "The final value of count is: " << counter << endl;
}//print data
