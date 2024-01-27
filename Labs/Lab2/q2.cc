#include <iomanip>
#include <iostream>


using namespace std;

int main()
{
    double cost;
    double area;
    double bagsize;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the amount of fertilizer, in pound, "
         << "in one bag: ";
    cin >> bagsize;
    cout << endl;

    cout << "Enter the cost of the " << bagsize
         << " pound in fertilizer bag: ";
    cin >> cost;
    cout << endl;

    cout << "Enter the area, in square feet, that can be "
        << "fertilized by one bag: ";
    cin >> area;
    cout << endl;

    cout << "The cost of the fertilizer per pound is: $"
         << cost / bagsize << endl;

    cout << "The cost of fertilizing per square foot is: $"
         << cost / area << endl;

    return 0;
}
