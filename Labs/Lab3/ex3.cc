#include <iostream>
#include<cmath>

using namespace std;

int getScore()
{ int score;
  cout<<"Enter your Score:"<<endl; // prompt user for input
  cin>>score;
  return score; // return value of input variable
}


int printGrade(int score)
{
    cout<<"Your grade is :\n"; //this function will evaluate

  if(score>=90 && score<=100)  // the grade based on
      cout<<"A";
  else if(score>=80 && score<=89) // the given score
      cout<<"B";
  else if(score>=70 && score<=79) // by using if statements
      cout<<"C";
  else if (score>=60 && score<=69)
      cout<<"D";
     else
      cout<<"F";
      return score; //return value of variable

}

int main()
{
   int score=getScore(); //calling our user functions in the main function
    printGrade(score);
}
