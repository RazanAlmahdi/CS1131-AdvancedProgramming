#include <iostream>
#include <iomanip>

using namespace std;

// program constants

void gymPrices(double&, double&);
void getInput(bool&, bool&, bool&, int&, int&);
double membershipCost(double, int, double, int, bool, bool, bool);

void menu();


int main()
{
    bool senior;
    bool fiveMoreSessions;
    bool twelveMoreMonths;

    int numMonths;
    int numTrainingSessions;
    double costPerMonth;
    double costTrainingSession;

    double totalCost;

    cout << fixed << showpoint << setprecision(2);

    menu();

    cout << endl;

    gymPrices(costPerMonth, costTrainingSession);

    getInput(senior, fiveMoreSessions, twelveMoreMonths, numMonths, numTrainingSessions);

    // cal getInfo
    totalCost = membershipCost(costPerMonth, numMonths, costTrainingSession, numTrainingSessions, senior, fiveMoreSessions, twelveMoreMonths);

    cout << "The total cost for the membership is: $" << totalCost << endl;
    return 0;
}

void menu()
{
    cout << "If you are a senior citizen, then the discount is 30% of the regular membership price." << endl;
    cout << "If you buy membership for twelve or more months you get a discount of 15%." << endl;
    cout << "If you buy and pay for 5 or more personal training session the discount on each session is 20%." << endl;
}


void gymPrices(double& costPerMonth, double& costTrainingSession)
{

    cout << "Please enter the cost per month: " << endl;
    cin >> costPerMonth;

    cout << "Please enter the cost of one personal traning session: " << endl;
    cin >> costTrainingSession;

}

void getInput(bool& senior, bool& fiveMoreSessions, bool& twelveMoreMonths, int& numMonths, int& numTrainingSessions)
{
    //Senior Verification
    char inputSenior;
    cout << "Are you Senior? Please enter 'y' or 'n': ";
    cin >> inputSenior;

    if (inputSenior == 'y')
    {
        senior = true;
    }
    else
        senior = false;

    cout << endl;


    //Number of personal training session.
    cout << "Enter the number of personal training sessions bought: ";
    cin >> numTrainingSessions;

    if (numTrainingSessions >= 5)
    {
        fiveMoreSessions = true;
    }
    else
        fiveMoreSessions = false;

    cout << endl;


    //Number of months
    cout << "Enter the number of months you are paying for: ";
    cin >> numMonths;

    if (numMonths >= 12)
    {
        twelveMoreMonths = true;
    }
    else
        twelveMoreMonths = false;

}

double membershipCost(double costPerMonth, int numMonths, double costTrainingSession, int numTrainingSessions, bool senior, bool fiveMoreSessions, bool twelveMoreMonths)
{
    double totalMonth, totalSession;


    //Session Discount
    if (fiveMoreSessions)
    {
        costTrainingSession = costTrainingSession * 0.8;
    }
    else
    {
        costTrainingSession = costTrainingSession;
    }


    //Month Discount
    if (twelveMoreMonths)
    {
        costPerMonth = costPerMonth * 0.85;
    }
    else
    {
        costPerMonth = costPerMonth;
    }


    totalMonth = costPerMonth  * numMonths;
    totalSession = costTrainingSession * numTrainingSessions;

    // Check if Senior Citizen Discount Applies
    if (senior) {
        return (totalMonth * 0.7) + totalSession ;
    }
    else {
        return totalMonth  + totalSession ;
    }

}
