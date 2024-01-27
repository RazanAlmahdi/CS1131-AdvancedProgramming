#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Guess My Number Game\n\n";

	do
	{
		cout << "Enter a guess between 1 and 100 enter -1 to stop: ";
		cin >> guess;
		tries++;

		if (guess > num){
		    cout << "Too high!\n\n";
		}

		else if (guess < num){
		    cout << "Too low!\n\n";
		}

		else{
		   cout << "CONGRATULATION YOU GUESSED THE RIGHT NUMBER!!" << endl;
		   cout << "You tried " << tries << " times." << endl;
		}
	} while (guess != num && guess != -1);

	if(guess == -1){
	    cout << "Thank you for playing!! Hope you enjoyed it!!" << endl;
	}

	return 0;
}
