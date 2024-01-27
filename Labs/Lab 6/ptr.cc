#include <iostream>

using namespace std;

int main()
{
  //declaring new memory location for the pointers
  double *firstPtr = new double;
  double *nextPtr = new double;
  *firstPtr = 62; //assingning a value to the pointer
  nextPtr = firstPtr; //assingning firstPtr to nextPtr
  delete firstPtr; //deleting firstPtr
  firstPtr = new double; //declaring new memory location for the pointers
  *firstPtr = 28; //assingning a value to the pointer
  cout << *firstPtr << " " << *nextPtr << endl;//printing the pointer values

    return 0;
}
