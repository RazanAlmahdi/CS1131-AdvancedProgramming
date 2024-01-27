#include <iostream>

using namespace std;

//Function prototype for the getArr, and remove_duplicate functions.
void getArr(int arrDuplicate[], int arrSize);
int remove_duplicate(int arrDuplicate[], int arrSize, int arrRemove[]);

int main()
{
  //declaring the array sizes;
  int arrSize, secondarrSize;
  //inputing the array size
  cout << "Enter the array size: ";
  cin >> arrSize;
  cout << endl;

  int arrDuplicate[arrSize], arrRemove[secondarrSize]; //declaring the arrays
  getArr(arrDuplicate, arrSize);//calling the get array function

  secondarrSize = remove_duplicate(arrDuplicate, arrSize, arrRemove); //calling the remove duplicate function and assigning the return value to the secondarrSize.

  cout << "Your new array is" << endl;
  //for loop to display the new array without duplicate.
  for (int i=0; i<secondarrSize; i++){
    cout << arrRemove[i] << " ";
  }

  return 0;
}

void getArr(int arrDuplicate[], int arrSize){

  for (int i=0; i<arrSize; i++){
    cout << "Enter the data in of your array: ";
    cin >> arrDuplicate[i];
    cout << endl;
  }
}//this function inputs thhe data of the duplicate array.

int remove_duplicate(int arrDuplicate[], int arrSize, int arrRemove[]){
  int j=0;
  for (int i=0; i<arrSize - 1; i++){
    if (arrDuplicate[i] != arrDuplicate[i+1]){
      arrRemove[j++] = arrDuplicate[i];
    }
  }
  return j;
} // this function removes the duplicate values and returns the size of the new array.
