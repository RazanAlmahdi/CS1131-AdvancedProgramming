#include <iostream>

using namespace std;

int sum(int arr[], int size); //sum function prototype.

int main()
{
    int size; // intializing the size
    //inputing the size from the user
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << endl;

    int arr[size]; //intializing the array

    cout << "Enter the values of the array: " << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    } //loop to input the array element.
     //calling the function sum and outputting the sum.
    cout << "The sum of the element in the array is: " << sum(arr, size) << endl;

    return 0;
}
int sum(int arr[], int size){
  //base case
    if (size == 0){
        return 0;
    }
    //recursive case
    else{
        return arr[size-1] + sum(arr, size-1); //array element + function call.
    }
}
