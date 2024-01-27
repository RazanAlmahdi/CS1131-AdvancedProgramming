#include <iostream>
#include <cctype>
#include <iomanip>


using namespace std;
//Function protype
void displayMenu();
int sellCoffee();
void cupsSold(int numCups, int& numSmallSize, int& numMediumSize, int& numLargeSize);
int totalAmount(int numSmallSize, int numMediumSize, int numLargeSize, const int smallSize, const int mediumSize, const int largeSize);
int totalCost(int numSmallSize, int numMediumSize, int numLargeSize, const int smallCost, const int mediumCost, const int largeCost);

int main()
{
  //declaring and intializing variables and constant
    const int smallSize = 9;
    const int mediumSize = 12;
    const int largeSize = 15;
    const int smallCost = 16;
    const int mediumCost = 18;
    const int largeCost = 20;
    int numCups, numSmallSize = 0, numMediumSize = 0, numLargeSize = 0;
    int totalAmountCoffee = 0, totalCostCoffee = 0;
    int totalNumCups = 0, totalAmountCoffeeToday = 0, totalMoneyMade = 0;
    char customerAvailable;

    displayMenu(); //displaying the menu of the Omaima coffee shop.

    cout << "Is there any customer you would like to serve: Enter y/n ";
    cin >> customerAvailable; //inputting if there is a customer to serve
    cout << endl;
//sentinel controlled loop that stops when there is no customer to serve
    while(toupper(customerAvailable) == 'Y'){
        numCups = sellCoffee(); //assigning the retunrd value of the function sellCoffee() to the numCups.

        totalNumCups += numCups; // calculating the total number of cups bought till now.

    cupsSold(numCups, numSmallSize, numMediumSize, numLargeSize); //calling the function cupsSold that specifies the number of cups bought in each size.
    //assigning the retunrd value of the function totalAmount() that calculate the total amount of coffee bought to the totalAmountCoffee.
    totalAmountCoffee = totalAmount(numSmallSize, numMediumSize, numLargeSize, smallSize, mediumSize, largeSize);

    totalAmountCoffeeToday += totalAmountCoffee; // calculating the total amount of coffee bought till now.
    //assigning the retunrd value of the function totalCost() that calculate the total cost of coffee bought to the totalCostCoffee.
    totalCostCoffee = totalCost(numSmallSize, numMediumSize, numLargeSize, smallCost, mediumCost, largeCost);

    totalMoneyMade += totalCostCoffee;// calculating the total amount of money made till now.
//outputig the results
    cout << "Total number of Cups bought:" << numCups << " cups" << endl; // the number of cups
    cout << "You want " << numSmallSize << " small cups of coffee "; // the number of small cups
    cout << numMediumSize << " medium cups of coffee "; // the number of medium cups
    cout << numLargeSize << " large cups of coffee " << endl; // the number of large cups
    cout << "Total Amount bought: " << totalAmountCoffee << " oz" << endl; // total amount of coffee bought by the customer
    cout << "Total Cost bought: " << totalCostCoffee << " SAR" << endl; // total cost of coffee bought by the customer
    cout << endl;
    cout << "Total number of Cups Sold till now: " << totalNumCups << " cups" << endl;//total number of cups bought till now.
    cout << "Total Amount Sold till now: " << totalAmountCoffeeToday << " oz" <<endl;//total amount of coffee bought till now.
    cout << "Total Money Made till now: " << totalMoneyMade << " SAR" << endl;//total amount of money made till now.

    cout << "Is there any customer you would like to serve: Enter y/n ";
    cin >> customerAvailable; //inputting if there is a customer to serve
    cout << endl;
    }

    cout << "Total number of Cups Sold Today: " << totalNumCups << " cups" << endl;//total number of cups bought today
    cout << "Total Amount Sold Today: " << totalAmountCoffeeToday << " oz" <<endl;//total amount of coffee bought today
    cout << "Total Money Made Today: " << totalMoneyMade << " SAR" << endl;//total money made today

    return 0;
}

void displayMenu(){
    cout << "Welcome to Omaima coffee shop" << endl;
    cout << "small coffee (9oz)" << setfill ('-') << setw (10) << "16SAR" << endl;
    cout << "medium coffee (12oz)" << setfill ('-') << setw (10) << "18SAR" << endl;
    cout <<"large coffee (15oz)" << setfill ('-') << setw (10) << "20SAR" << endl;
}//funtion definition of the menu

int sellCoffee(){
    int numCups;
    cout << "How many coffee cups would you like to buy? ";
    cin >> numCups;//inputting the number of cups the customer would like to buy
    cout << endl;

    return numCups;//returning the value
}//funtion definition to sell coffee

void cupsSold(int numCups, int& numSmallSize, int& numMediumSize, int& numLargeSize){
  //intializing the counter for each size.
    numSmallSize = 0;
    numMediumSize = 0;
    numLargeSize = 0;
    char size;
    while (numCups > 0){
        cout << "What size do you want for cup number: " << numCups << endl;
        cout << " Enter s for small, m for medium, l for large." << endl;
        cin >> size; //inputting the size of the cup
        cout << endl;
        //switch statement to calculate the total number of cups of each size
        switch(toupper(size)){
            case 'S':
                numSmallSize ++;
                break;
            case 'M':
                numMediumSize ++;
                break;
            case 'L':
                numLargeSize ++;
                break;
        }
        numCups--;
    }
}//function definition of the function that determines the number of cups sold in each size.

int totalAmount(int numSmallSize, int numMediumSize, int numLargeSize, const int smallSize, const int mediumSize, const int largeSize){
    int totalSmall, totalMedium, totalLarge, total;

    totalSmall = numSmallSize * smallSize;
    totalMedium = numMediumSize * mediumSize;
    totalLarge = numLargeSize * largeSize;

    return total = totalSmall + totalMedium + totalLarge;//returning the total amount of the coffee bought
}//function definition of the funtion that calculate the total amount of coffee bought.
int totalCost(int numSmallSize, int numMediumSize, int numLargeSize, const int smallCost, const int mediumCost, const int largeCost){
    int totalSmall, totalMedium, totalLarge, total;

    totalSmall = numSmallSize * smallCost;
    totalMedium = numMediumSize * mediumCost;
    totalLarge = numLargeSize * largeCost;

    return total = totalSmall + totalMedium + totalLarge;//returning the total cost of the coffee bought
}//function definition of the funtion that calculate the total cost of coffee bought.
