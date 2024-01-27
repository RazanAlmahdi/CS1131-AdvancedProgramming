#include <iostream>
#include <string>
using namespace std;
// function prototype
bool palindrome(string word, int i, int j);
int main(){
    // declare
    string str;
    char answer;
    // the loop for the main program
    do {
      cout << "Enter a string: ";
      cin >> str;        // ask the user to enter a string
      int length= str.length(); // find the length of the string
      // set the first and the last index
      int lastIndex= length-1;
      int firstIndex=0;
      // check the returning value of the function
      if (palindrome(str, lastIndex, firstIndex)){
          cout << "It is a palindrome." << endl;
      }
      else{
          cout << " It is not a palindrome." << endl;
      }
      cout << "Do you want to try again? 'Y' for yes, 'N' for no." << endl;
      cin >> answer;      // ask the user if he wants to continue
    } while(answer=='Y' || answer=='y');
    cout << endl << "Thank you! See you soon.";
    return 0;
}

bool palindrome(string word, int i, int j){
    // comparing the first and the last index
    if (word[i] != word[j]){
        return false;
    }
    else if(i==j){
        return true;
    }
    else if (i<=j){
        return true;
    }
    else {
        return palindrome(word, i-1, j+1);
    }
}
