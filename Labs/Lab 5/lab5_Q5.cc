#include<iostream>

using namespace std;

int countNums(int numbers[], int i, int length) //this function will recursively increment
                                                //until the given array ends
{
    //the base condition
    if(i >= length){
        return 0;
    }
    // we return the value of the array along with the recursive function
    // and we increment the index to move to the next value of the array
    return (numbers[i] + countNums(numbers, i + 1, length));
}


int main()
{
    //delcaring the variables
    int numbers[10];
    int size, i;
    size = 10;

    cout << "This program finds the sum of an array of 10 values! \n" << endl;

    cout << "Enter any 10 numbers to proceed with the calculation: " << endl;

    //in this loop, as long as the index is less than the determined size for the array,
    //the user will be able to input values. when the condition is false, we exist the loop.
    for(i=0; i<size; i++)
    {
        cin >> numbers[i];
    }

    //we will output the final result which is the total sum of numbers in the array
    cout << "Sum of array elements: " << countNums(numbers, 0, size);

    return 0;
}
