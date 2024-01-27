//**********************************************************
// Program: Calculate Grade
// This program get your score and returns the corresponding
// grade
//**********************************************************
#include <iostream>

using namespace std;

//This function inputs the score from the user and then returns the score value.
float getScore(){
  float score;
// user prompt to enter his score.
  cout << "Enter your score out of 100: ";
  cin >> score;
  cout << endl;

  return score;
}

//This function takes as parameters the student score and using an if else structure it prints the coresponding grade.
void printGrade(float score){
  if (score>= 95){
    cout<< "Your grade is A+" << endl;
  } else if (score>=90){
    cout<< "Your grade is A" << endl;
  } else if (score>= 85){
    cout<< "Your grade is B+" << endl;
  } else if (score>= 80){
    cout<< "Your grade is B" << endl;
  } else if (score>= 75){
    cout<< "Your grade is C+" << endl;
  } else if (score>= 70){
    cout<< "Your grade is C" << endl;
  } else if (score>= 65){
    cout<< "Your grade is D+" << endl;
  } else if (score>= 60){
    cout<< "Your grade is D" << endl;
  } else {
    cout << "Failed" << endl;
  }
}

//This is the main function that calls the getScore and printGrade function.
int main(){

  float score; // intializing the score variable.

  score = getScore(); // assigning the return value from the getScore function to the score variable.
  cout << "Your score is: " << score << endl; //printing the score.
  printGrade(score); // calling the printGrade function to print the corresponding grade.
  cout << endl;

  return 0;
}
