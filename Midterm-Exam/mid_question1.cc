#include <iostream>

using namespace std;

//Function prototype for the menu, the getInput and membershipCost functions.
char menu();
void getInput(char choice, double &training, double &senior, double membershipPerMonth, double &membership, int &numTrainingSession, int &numMonth);
void membershipCost(char choice, double training, double senior, double membershipPerMonth, double membership, int numTrainingSession, int numMonth);

int main()
{
  //declaring variables
  char choice;
  double training, senior, membershipPerMonth, membership;
  int numTrainingSession, numMonth;
  choice = menu(); //calling the menu and assigning the return value to choice.
  membershipCost(choice, training, senior, membershipPerMonth, membership, numTrainingSession, numMonth); //calling the membershipCost function.
  return 0;
}

char menu(){
  char choice;
  cout << "a. senior citizens discount is 30% \n"
      <<"b.bought and paid for 12 or more months, the discount is 15% \n"
      <<"c.five personal training sessions are bought and paid for, the discount on each session is 20%\n";
  cin >> choice;
  cout <<endl;
  return choice;
}// this function inputs the choices

void getInput(char choice, double &training, double &senior, double membershipPerMonth, double &membership, int &numTrainingSession, int &numMonth){
  switch(choice) {
  case 'a':
    cout << "Enter the cost of a senior membership: ";
    cin >> senior;
    cout <<endl;
    break;
  case 'b':
    cout << "Enter the cost of the membership per month: ";
    cin >> membershipPerMonth;
    cout <<endl;

    cout << "Enter the number of month: ";
    cin >> numMonth;
    cout << endl;

    membership = membershipPerMonth * numMonth;
    break;
    case 'c':
      cout << "Enter the cost of a training session: ";
      cin >> training;
      cout <<endl;

      cout << "Enter the number of training session: ";
      cin >> numTrainingSession;
      cout << endl;
      break;
}
}//based on the choice this function gets the input.

void membershipCost(char choice, double training, double senior, double membershipPerMonth, double membership, int numTrainingSession, int numMonth){
  getInput(choice, training, senior, membershipPerMonth, membership, numTrainingSession, numMonth);//calling the input function.
  double totalMembership;
  switch(choice) {
  case 'a':
    totalMembership = senior*0.7;
    cout << "The total membership for a Senior is: " << totalMembership << endl;
    break;
  case 'b':
    if (numMonth < 12){
      totalMembership = membership;
      cout << "The total membership for " << numMonth << " is: " << totalMembership << endl;
    }
    else{
      totalMembership = membership * 0.85;
      cout << "The total membership for " << numMonth << " month is: " << totalMembership << endl;
    }

    break;
    case 'c':
      if (numTrainingSession < 5){
      totalMembership = training * numTrainingSession;
      cout << "The total membership for " << numTrainingSession << " training session is: " << totalMembership << endl;
    }
    else{
      totalMembership = (training * 0.8) * numTrainingSession;
      cout << "The total membership for " << numTrainingSession << " training session is: " << totalMembership << endl;
    }
      break;
}
}// based on the input and the choice this function diplays the total membership.
