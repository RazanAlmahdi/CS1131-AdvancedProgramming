#include <iostream>
#include <string>
#include <cctype> //this library will make our program uppercase inclusive
using namespace std;

//this function will check to see if the letters in the corresponding positions
//from left to right and right to left match, regardless of whether they are
//upper or lowercase. if the letters match, it returns true, if they do not, it
//returns false

bool palindromeDetector(const string &s, size_t i = 0)
{
    if (i >= s.size() / 2) return true;
    if (toupper(s[i]) != toupper(s[s.size() - i - 1])) return false;
    return palindromeDetector(s, i + 1);
}


int main()
{
    string sentence;

    //prompting the user to provide input
    cout << "Type a sentence or word to see if it's a palindrome: ";
    cin >> sentence;

    //here we call our function to check the given input. if the input does
    //not follow the correct case of the function, it returns the "False" case
    // message. else, it will return the "True" case message

    if (!palindromeDetector(sentence))
        cout << "false! it is not a palindrome :( \n";

        else if (palindromeDetector(sentence))
    cout << "true! it is a palindrome :) \n";
    return 0;
}
