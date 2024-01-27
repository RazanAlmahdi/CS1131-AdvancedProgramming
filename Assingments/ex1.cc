/* This program gets the balance and thw withdraw amount from the customer and then return the new balance after
substracting the withdraw amount and the service charge if any*/
#include <iostream>

using namespace std;

int main()
{
    const int MAXIMUM = 500;
    double balance, withdraw, newBalance, serviceCharge;
    char answer;

    cout << "Enter your current balance: ";
    cin >> balance;
    cout << endl;

    cout << "Enter the amount you want to withdraw: ";
    cin >> withdraw;
    cout << endl;

    if (balance < 0){
        cout << "Sorry you have zero or negative balance can't withdraw money. Thank you!" << endl;
    }
    else if (withdraw > MAXIMUM){
        cout << "Maximum withdraw per day is 500$. Thank you!" << endl;
    }
    else if (withdraw > 300){
           serviceCharge = (withdraw - 300) * 4/100;

           if (balance > withdraw) {
            newBalance = balance - (withdraw + serviceCharge);
            cout << "The operation was completed successfully. Your new balance is " << newBalance << " Thank you!" << endl;
           }
           else {
               cout << "You can withdraw with a service charge of 25$. ";
               cin >> answer;
               cout << endl;

               if (answer == ( 'y')) {
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
            cin >> answer;
            cout << endl;

            if (answer == ('y')) {
                newBalance = balance - (withdraw + 25);
                cout << "The operation was completed successfully. Your new balance is " << newBalance << " Thank you!" << endl;
                }
                else {
                    cout << "Thank you" << endl;
                    }
                }
        }

    return 0;
}
