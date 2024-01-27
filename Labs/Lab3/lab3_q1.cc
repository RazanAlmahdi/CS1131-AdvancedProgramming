//**********************************************************
// Program: Telephone Digits
// This is an example of a sentinel-controlled loop. This
// program converts uppercase letters to their corresponding
// telephone digits.
//**********************************************************
#include <iostream>

using namespace std;

int main()
{
  //initializing the variables letter, digit and num.
 char letter;
 int digit, num;
 //user prompt that explains the program to the user.
 cout << "Program to convert uppercase letters to "
 << "their corresponding telephone digits."
 << endl;
 cout << "To stop the program enter #." << endl; // user prompt that asks the user to enter # to stop the program
 cout << "Enter an uppercase letter: ";  // user prompt to input letters from the user
 cin >> letter;
 cout << endl;

// sentinel controlled while loop that takes a letter and match it to a number.
 while (letter != '#')
 {
 cout << "Letter: " << letter;
 cout << ", Corresponding telephone digit: ";
 //converting the leter character to an integer using static_cast to find its position in the alphabet.
 num = static_cast<int>(letter)
 - static_cast<int>('A');

// The first if statement make sure that the letter entered is uppercase.
 if (0 <= num && num < 26)
 {
 digit = (num / 3) + 2; //calculated the telephone digit coresponding to the entered letters.
 //if statement to calculete the digit.
 if (((num / 3 == 6 ) || (num / 3 == 7))
 && (num % 3 == 0))
 digit = digit - 1;
 if (digit > 9)
 digit = 9;
 cout << digit << endl; //printing the digit.
 }
 else //the esle deal with the incorrect input.
 cout << "Invalid input." << endl;
 cout << "\nEnter another uppercase "
 << "letter to find its corresponding "
 << "telephone digit." << endl;
 cout << "To stop the program enter #."
 << endl;
 //prompting the user again for input
 cout << "Enter a letter: ";
 cin >> letter;
 cout << endl;
 }//end while
 return 0;
}
