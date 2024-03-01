#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	int randomNumber = rand()%100+1;
	int guess;
	int attempts=0;
	
	cout<<" Welcome to the Guessing the number Game";
	cout<<"\n Try to guess the number between 1 to 100";

	do {
        cout <<" Enter your guess:) ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } 
		else if (guess == randomNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts" << endl;
        }
    }
	 while (guess != randomNumber);

    return 0;
	}
