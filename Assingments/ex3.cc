#include <iostream>
using namespace std;
//function to calculate the average of scores we pass in the array of scores
float calcAvg(float score[], int n){
  int i;
  float avg, sum = 0.0;
  for (i=0; i<n; i++){
          sum += score[i];
      }
  avg = sum/n;

  return avg;
}
/*function to print the names of student who scored below average we pass in the
 array of scores, and names, and the average score.*/
void printBelowAverage(string name[] , float score[] , int n ,  float avg){
  int i;
  for (i=0; i<n; ++i){
      if (score[i] < avg) {
        cout << name[i]  << endl;
      }
  }
}
//function to find the highest score we pass in the array of scores.
float highestScore(float score[] , int n){
  int i;
  float highestscore = score[0];
  for (i=1; i<n; ++i){
         if (score[i] > highestscore){
             highestscore = score[i];
         }

     }
     return highestscore;
}
/*function that prints the names of student who got the highest score we pass
in the array of scores, and names, and the highest score*/
void printHighestScore(string name[] , float score[] , int n , float highscore){
  int i;
  for (i=0; i<n; ++i){
      if (score[i] == highscore) {
      cout << name[i] << endl;
      }
  }
}
//calling all the function in the main
int main()
{
    int studentNum, i;
    cout << "Enter the number of student: ";
    cin >> studentNum;
    cout << endl;
    string name[studentNum];
    float score[studentNum];
    float average , highestscore;
    //creating the name and score array
    for (i=0 ; i<studentNum; ++i){
      cout << "Enter the student name:";
      cin >> name[i];
      cout << "Enter the  student score:";
      cin >> score[i];
    }


    average = calcAvg (score , studentNum);
    cout << "The average score is " << average << endl;
    cout << "The student(s) who scored below average are: ";
    printBelowAverage(name , score , studentNum , average );
    cout << endl;
    highestscore = highestScore(score , studentNum);
    cout << "The highestscore score is " << highestscore << endl;
    cout << " The student(s) who scored highest score is/are: \n";
    printHighestScore(name , score , studentNum , highestscore);
    cout << endl;
    return 0;
}
