#include <iostream>
#include <string>

using namespace std;


//this function will print the first pattern, incrementing the star pattern
// and decrementing the space

void starsUp(int stars, int space = 0)
{
    if (stars == 0)
    {
        return;
    }
    else
    {
        starsUp (stars - 1, space + 1);

        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }

        for (int i =0; i < stars; i++)
            cout << "* ";

        cout << endl;
    }
}


//this function is the opposite of the previous function, and we will increment
//the spaces while decrementing the stars. after that, we will recursively
// call the function
void starsDown (int stars, int space = 1)
{
    if (stars == 0){
        return;
    }
    else {

        for (int k = space; k > 0; k--)
            cout << " ";

        for (int i = stars; i > 0; i--)
        {
            cout << "* ";
        }

        cout << endl;

        starsDown (stars - 1, space + 1);
    }
}

int main ()
{
    int rows;

    //prompt user to enter a number of their choice
    cout << "enter the maximum number of rows: \n" << endl;
    cin >> rows;

    //calling the functions
    starsUp(rows);
    starsDown(rows-1);
    return 0;
}
