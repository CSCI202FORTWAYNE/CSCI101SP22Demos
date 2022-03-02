#include <iostream>
#include <cstdlib>
#include <cctype>
#include <climits>

using namespace std;


int main()
{
	int secretNum; 
	int guess;
	char play = 'Y';
	
	while(play != 'N')
	{
		secretNum = (rand() % 50) + 1;
		bool isGuessed = false;
		int count = 0;
		while(!isGuessed && count < 5)
		{
			cout << "Guess the random number (1 - 50): " << endl;
			cin >> guess;
			while(!cin || guess < 1 || guess > 50)
			{
				if(!cin) //input stream is broken
				{
					cout << "Invalid input!" << endl;
					cin.clear(); //unlocks the input stream
					cin.ignore(INT_MAX,'\n'); //empties the stream
				}
				else 
				{
					//tell the user they did it wrong
					cout << "The number is out of range. " << endl;
				}
				//ask to do again
				cout << "Guess the random number (1 - 50): " << endl;
				cin >> guess;
			}
		
			if(guess > secretNum)
			{
				cout << "Your guess is too high!" << endl;
			}
			else if(guess < secretNum)
			{
				cout << "Your guess is too low!" << endl;
			}
			else if(guess == secretNum)
			{
				cout << "You guessed the number!" << endl;
				isGuessed = true;
			}
			count++;
		}
		cout << "The secret num was " << secretNum << endl;
		cout << "Would you like to play again (Enter N to quit): " << endl;
		cin >> play;
		play = toupper(play);
	}
	
	cout << "Game Over!" << endl;
	
	
	return 0;
}