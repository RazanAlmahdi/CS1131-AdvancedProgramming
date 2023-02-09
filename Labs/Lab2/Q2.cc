#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    double cost;
    double area;
    
    double bagSize;
    
    cout << fixed << showpoint << setprecision (2);
    
    cout << "enter the amount of fertilizer, in pounds"
        << "in one bag:";
    cin >> bagSize;
    cout << endl;
    
    cout << "enter the cost of the" << bagSize
        << "pound fertilizer bag:";
    cin >> cost;
    cout << endl;
    
    cout << "enter the area, in square feet, that can be"
        << "fertilized by one bag:";
    cin >> area;
    cout << endl;
    
    cout << "the cost of the fertilizer per pound is : $"
    << cost / bagSize << endl;
    cout << "the cost of fertilizing per square foot is :$"
    << cost / area << endl;
    
    return 0;
}
