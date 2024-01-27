#include <iostream>
#include <string>

using namespace std;
//function prototype of isVowel and vowels.
int isVowel(char ch);
int vowels(string str, int l);

int main()
{
    //declaring variables.
    string str;
    int l;
    //inputing string.
    cout <<"Enter a string: ";
    getline(cin,str);
    cout << endl;

    l = str.length();//getting the length of the string.
    //calling the function vowels and outputting the total number of vowels in the string.
    cout << "The total number of vowels in the string is: " << vowels(str, l) << endl;

    return 0;
}
int isVowel(char ch){
    if (ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e' || ch == 'a'|| ch == 'I' || ch == 'O' || ch == 'U' || ch == 'E' || ch == 'A'){
        return 1;
    }
    else {
        return 0;
    }
}//value returning function the returns 1 if the charachter is a vowel.

int vowels(string str, int l){
  //Base case.
    if (l==1){
       return isVowel(str[l-1]); // calling function isVowel
    }//checks if the string of length 1 is a vowel returns 1 or 0
    else{
      //summing the results of every character in the string whether its 1 or 0 calls isVowel to check
        return vowels(str , l-1) + isVowel(str[l-1]);
    }
}
