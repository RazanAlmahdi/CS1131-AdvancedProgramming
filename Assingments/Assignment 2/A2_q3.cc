#include <iostream>

using namespace std;

int gcd(int x, int y);//greatest common divisor function protype.

int main()
{
    int x, y; //declaring variables

    cout << "Enter two integers: " ;
    cin >> x >> y; //inputting x and y the two number that we want wo find their gcd.
    cout << endl;
    //outputing the gcd of x and y by calling tge recursive function gcd.
    cout << "The greatest common divisor between " << x << " and " << y << " is: " << gcd(x, y) << endl;

    return 0;
}
int gcd(int x, int y){
  //Base case
    if (y == 0){
        return x;
    }
    //Recusive case
    else{
        return gcd(y, x%y);//calling the function and assigning the remainder of x and y to y and assigning y to x.
    }
}//gcd funtion definition
