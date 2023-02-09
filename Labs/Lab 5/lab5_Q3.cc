#include<iostream>
#include <string>
using namespace std;

// this function will check for vowels within the sentence, and return results
int vowels(char ch)
{
    return (ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' ||
            ch== 'O' || ch=='o' || ch=='U' || ch== 'u');
}

// this function will count the total amount of vowels up to n(total string length)
// and repeats itself while decrementing with each turn
int vowelsNum(string sentence, int n)
{
    if (n == 1)
        return vowels(sentence[n-1]);

    return vowelsNum(sentence, n-1) + vowels(sentence[n-1]);
}

int main()
{

    string sentence;

    //prompting the user for input
    cout << "Enter a sentence: \n" << endl;
    getline(cin, sentence);

    //printing the result
    cout << "The total number of vowels is: "<< vowelsNum(sentence, sentence.length()) << endl;
    return 0;
}
