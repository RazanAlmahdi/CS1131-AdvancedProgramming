#include <iostream>

using namespace std;

int main()
{
    double balance, withdraw, newBalance, serviceCharge, maximum = 500;
    bool choice;
    char answer;

    cout << "Enter your current balance: ";
    cin >> balance;
    cout << endl;

    while (balance > 0 && maximum > 0 && answer == 'y'){
      cout << "Enter the amount you want to withdraw: ";
      cin >> withdraw;
      cout << endl;

      if (withdraw > 300){
            serviceCharge = (withdraw - 300) * 4/100;

            if (balance > withdraw) {
             newBalance = balance - (withdraw + serviceCharge);
             cout << "The operation was completed successfully. Your new balance is " << newBalance << " Thank you!" << endl;
            }
            else {
                cout << "You can withdraw with a service charge of 25$. ";
                cin >> choice;
                cout << endl;

                if (choice == ("yes"|| "Yes" || "y" || "Y")) {
                     newBalance = balance - (withdraw + serviceCharge + 25);
                     cout << "The operation was completed successfully. Your new balance is " << newBalance << " Thank you!" << endl;
                 }
                 else {
                    cout << "Thank you" << endl;
                 }
            }
         }
     else if (withdraw <= 300) {
         if ( balance > withdraw){
                 newBalance = balance - withdraw;
                 cout << "The operation was completed successfully. Your new balance is " << newBalance << " Thank you!" << endl;
             }
         else {
             cout << "You can withdraw with a service charge of 25$. ";
             cin >> choice;
             cout << endl;

             if (choice == ("yes" || "Yes" || "y" || "Y")) {
                 newBalance = balance - (withdraw + 25);
                 cout << "The operation was completed successfully. Your new balance is " << newBalance << " Thank you!" << endl;
                 }
                 else {
                     cout << "Thank you" << endl;
                     }
                 }
         }
         balance = newBalance;
         maximum -= withdraw;

         cout << "Do you want to withdraw more money? Enter y ";
         cin >> answer;
         cout << endl;
    }

    if (answer != "y"){
      cout << "Thank you!" << endl;
    }
    if (balance <= 0){
      cout << "Sorry you have zero or negative balance can't withdraw money. Thank you!" << endl;
    }
    else if (maximum <= 0){
      cout << "Maximum withdraw per day is 500$. Thank you!" << endl;
    }

    return 0;
}
