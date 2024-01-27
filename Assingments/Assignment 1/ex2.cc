/* This program calculate the cost of  single math hour */
#include <iostream>

using namespace std;

const double totalFee = 25000.00;
const int semesterUnits = 15 , totalWeeks= 15 , mathUnits = 4 , weeklyMthC = 3 , missingWeeklyHour = 1;

double costPerUnit , totalMthCCost;
int availableMthC , attendedMthC , singleMthCCost;


int main()
{
    costPerUnit = totalFee/ semesterUnits;
    cout << "The cost of a unit is " << costPerUnit << "$" << endl;

    totalMthCCost = mathUnits * costPerUnit;
    cout << "The total cost of math classes is " << totalMthCCost << "$" << endl;

    availableMthC = totalWeeks * weeklyMthC;
    cout << "Number of available math classes is " << availableMthC << " hours" << endl;

    attendedMthC = availableMthC - (totalWeeks* missingWeeklyHour);
    cout << "The number of attended math classes is " << attendedMthC << " hours" << endl;

    singleMthCCost = totalMthCCost / attendedMthC;
    cout << "The cost of a single math hour is " << singleMthCCost << "$" <<endl;


    return 0;
}
