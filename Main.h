#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
char chr;

int main()
{
	srand((unsigned int) time(NULL));
	int number = (rand() % 100) + 1; //0-99 + 1 -> 1-100
	int guess = 0;
	int tries = 0;
	char answer = 'Y'; // initializing the try again option

	while(guess != number && (answer == 'Y' || answer == 'y')); //while loop while guess in incorrect
	{
		cout << "Guess a number 1-100: ";
		cin >> guess;
		tries++;
		
		if (tries > 20) //if loop when user reaches 20 tries
		{
			cout << "You ran out of tries, try again? (Enter Y/y or N/n): ";
			cin >> answer;
			number = (rand() % 100) + 1;
			tries = 0;
		}
		else if (guess > number) // loops for directing the guesses
		{
			cout << "Too high, guess lower!" << endl;
		}
		else if (guess < number)
		{
			cout << "Too low, guess higher!" << endl;
		}
		else if (guess == number && tries == 1) // loops for different correct guesses
		{
			cout << "You cheated, reattempt!" << endl;
			number = (rand() % 100) + 1;
			tries = 0;
		}
		else if (guess == number && (tries >= 2 || tries <= 5))
		{
			cout << "Great job, try again? (Enter Y/y or N/n): ";
			cin >> answer;
			tries = 0;
		}
		else if (guess == number && (tries > 5 || tries <= 10))
		{
			cout << "You got it! Try again? (Enter Y/y or N/n): ";
			cin >> answer;
			tries = 0;
		}
		else if (guess == number && (tries > 10 || tries <= 15))
		{
			cout << "You got the answer in " << tries << " tries. Try again? (Enter Y/y or N/n: ";
			cin >> answer;
			tries = 0;
		}
		else if (guess == number && (tries > 15 || tries <= 19))
		{
			cout << "Finally, you guessed the number. Try again? (Enter Y/y or N/n: ";
			cin >> answer;
			tries = 0;
		}
		else if (guess == number && tries = 20)
		{
			cout << "You got the answer on your last guess! Try again? (Enter Y/y or N/n: ";
			cin >> answer;
			tries = 0;
		}
	}
	if (answer == 'N' || answer == 'n') //loop for when user selects to not play again
	{
		cout << "Thanks for playing!" << endl;
	}
	return 0;
}

