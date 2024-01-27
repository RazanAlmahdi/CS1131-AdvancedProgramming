#include <iostream>
using namespace std;
// function prototypes
void pattern(char ch, int n, const int c);
void pattern2(char ch, int n, const int c);

int main(){
    // declare
    char star='*';
    int num;
    cout <<"Enter a number:"; // ask the user to enter a number for the pattern
    cin >> num;
    const int counter=num; // a constant for the pattern number
    pattern(star, num, counter);
    pattern2(star, num, counter);
    return 0;
}
// first part of the pattern
void pattern(char ch, int n, const int c){
  int i;
  if (n==0){ //base case
    //stop
  }
  else {
    // loop for the spaces
    for (int j=0; j<n; j++){
        cout << " ";
    }
    // loop for the star's pattern
    for (i=0; i < (c-(n-1)); i++){
      cout << ch << " ";
    }
    cout << endl;
    return pattern(ch, n-1, c);
  }
}
void pattern2(char ch, int n, const int c){

    if (n==1){ // base case
        //stop
    }
    else {
        // loop for the spaces
        for (int j=0; j <= (c-(n-1)); j++){
            cout << " ";
        }
        // loop for the star's pattern
        for (int i=1; i < n; i++){
            cout << ch << " ";
        }
    cout << endl;
    return pattern2(ch, n-1, c);
    }
}
