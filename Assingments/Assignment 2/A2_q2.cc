#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//delcaring the prototypes

void welcomeMessage(char arr[][6]);
void seatSelection(char arr[][6], char ticket);
char classSelection();


int main (){
    char arr[13][6]= {{'*','*','X','*', 'X','X'}, {'*','X','*','X','*','X'}, {'*', '*', 'X','X','*','X'},
{'X', '*', 'X','*','X','X'},{'*','X','*','X','*','*'}, {'*','X','*','*','*','X'},
{'X','*','*','*','X','X'}, {'*','X','*','X','X','*'}, {'X', '*', 'X','X','*','X'},
{'*','X','*','X','X','X'},{'*', '*','X','*','X','*'}, {'*','*','X','X','*','X'}, {'*','*','*','*','X','*'}};
    char ticket, reserve;
    welcomeMessage(arr);

    //prompt the user to make a choice, based on the choice, we either proceed with the program and call the
    //functions, or terminate
    cout<< "Do you want to reserve a seat? ((Y/y for yes) or (N/n for no)):\n";
    cin>> reserve;
    cout << endl;
    while(toupper(reserve) == 'Y'){
     ticket = classSelection();
     seatSelection(arr, ticket);

     cout<< "Do you want to reserve a seat? ((Y/y for yes) or (N/n for no)):\n";
     cin>> reserve;
     cout <<endl;
 }

 //output the new display after the reservations
 cout << "The new display is: " << endl;
cout << "         A     B     C     D     E     F"   <<endl;
 for (int i=0; i<13; i++){
      cout << "Row" << i+1 << " ";
      for (int j= 0; j <6; j++){
        cout << setw(5) << arr[i][j] << " ";
      }

      cout << endl;
}
 cout << "thank you for flying with Unicorn airlines!" << endl;
    return 0;
}

//function to welcome the user and display the seatings of the plane
void welcomeMessage(char arr[][6]){
cout << "welcome to Unicorn airlines! here is an introduction of our seatings: \n" << endl;
cout << "first and second row = first ticket \n" << endl;
cout << "third to seventh row = business ticket \n" << endl;
cout << "eighth to thirteenth row = economy ticket \n" << endl;

cout << "         A     B     C     D     E     F"   <<endl;
 for (int i=0; i<13; i++){
      cout << "Row" << i+1 << " ";
      for (int j= 0; j <6; j++){
        cout << setw(5) << arr[i][j] << " ";
      }

      cout << endl;
    }
}

//this function allows the user to select which class they wish to reserve in
//and returns its value so we can determine which seating rows would be outputted

char classSelection(){
    char ticket;

    cout<< "choose the ticket you want. (F/f for first), (B/b for business), (E/e for economy)):\n";

    cin>> ticket;
    cout <<endl;

   return toupper(ticket);
}

//this function outputs the specific rows for the selected class, and enables the user
//to select the particular seat they want, while checking for its availability.
void seatSelection(char arr[][6], char ticket){
 int row, column;

 switch(ticket){
     case 'F':

        cout << "if the seat has a * it is availble. Those are the availble in the first class." << endl;
           cout << "         A     B     C     D     E     F"   <<endl;
           for (int i=0; i<2; i++){
               cout << "Row" << i+1 << " ";
               for (int j= 0; j <6; j++){
                   cout << setw(5) << arr[i][j] << " ";
               }
               cout << endl;
           }

     cout<< "Enter the desired row between 0 and 1: \n";
     cin>>row;
     cout << endl;
     while(!(row >= 0 && row < 2)){
         cout << "Invalid input. Please try again." << endl;
         cout<< "Enter the desired row between 0 and 1: \n";
         cin >> row;
         cout << endl;
        }
     cout<< "Enter the desired column between 0 and 5: \n";
     cin>> column;
     cout << endl;
     while(!(column >= 0 && column < 6)){
            cout << "Invalid input. Please try again." << endl;
            cout<< "Enter the desired column between 0 and 5: \n";
            cin >> column;
            cout << endl;
        }
        if (arr[row][column] == '*'){
            arr[row][column] = 'X';
        }
        else {
            cout << "This seat is not availble. Thank you" << endl;
        }
        break;

        case 'B':

        cout << "if the seat has a * it is availble. Those are the availble in the business class." << endl;
            cout << "         A     B     C     D     E     F"   <<endl;
           for (int i=2; i<7; i++){
               cout << "Row" << i+1 << " ";
               for (int j= 0; j <6; j++){
                   cout << setw(5) << arr[i][j] << " ";
               }
               cout << endl;
           }

     cout<< "Enter the desired row between 2 and 6: \n";
     cin>>row;
     cout << endl;
     while(!(row >= 2 && row < 7)){
         cout << "Invalid input. Please try again." << endl;
         cout<< "Enter the desired row between 2 and 6: \n";
         cin >> row;
         cout << endl;
        }

     cout<< "Enter the desired column between 0 and 5: \n";
     cin>> column;
     cout << endl;
     while(!(column >= 0 && column < 6)){
            cout << "Invalid input. Please try again." << endl;
            cout<< "Enter the desired column between 0 and 5: \n";
            cin >> column;
            cout << endl;
        }
        if (arr[row][column] == '*'){
            arr[row][column] = 'X';
        }
        else {
            cout << "This seat is not availble. Thank you" << endl;
        }
        break;

        case 'E':

        cout << "if the seat has a * it is availble. Those are the availble in the economy class." << endl;
            cout <<"         A     B     C     D     E     F"  <<endl;
           for (int i=7; i<13; i++){
               cout << "Row" << i+1 << " ";
               for (int j= 0; j <6; j++){
                   cout << setw(5) << arr[i][j] << " ";
               }
               cout << endl;

           }
     cout<< "Enter the desired row between 7 and 12: \n";
     cin>>row;
     cout << endl;
     while(!(row >= 7 && row < 13)){
         cout << "Invalid input. Please try again." << endl;
         cout<< "Enter the desired row between 7 and 12: \n";
         cin >> row;
         cout << endl;
        }

     cout<< "Enter the desired column between 0 and 5: \n";
     cin>> column;
     cout << endl;
     while(!(column >= 0 && column < 6)){
            cout << "Invalid input. Please try again." << endl;
            cout<< "Enter the desired column between 0 and 5: \n";
            cin >> column;
            cout << endl;
        }
        if (arr[row][column] == '*'){
            arr[row][column] = 'X';
        }
        else {
            cout << "This seat is not availble. Thank you" << endl;
        }
        break;
   }
}
