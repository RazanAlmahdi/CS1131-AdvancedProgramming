//Flag-controlled while loop.
//Number guessing game.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
 //declare the variables
 int num; //variable to store the random number
 int guess; //variable to store the number guessed by the user
 bool isGuessed; //boolean variable to control the loop
 srand(time(0)); //srand() function set a starting point
 num = rand() % 100; // rand() function to generate random numbers
 isGuessed = false; // set the loop control variable
 while (!isGuessed) // test the loop control variable
 {
   cout << "Enter an integer greater"
        << " than or equal to 0 and "
        << "less than 100: "; // ask the user to enter a number
   cin >> guess;
   cout << endl;
   // if statement to check if guess equal to num
   if (guess == num)
 {
      cout << "You guessed the correct "
           << "number." << endl;
      isGuessed = true; // update the loop control variable
 }
 //  check if guess less than num
 else if (guess < num)
      cout << "Your guess is lower than the "
           << "number.\n Guess again!"
           << endl;
// check if guess larger than num
 else
      cout << "Your guess is higher than "
           << "the number.\n Guess again!"
           << endl;
 } //end while
 return 0;
}
