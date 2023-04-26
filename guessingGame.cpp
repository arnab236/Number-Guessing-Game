#include<bits/stdc++.h>

using namespace std;

int main()
{
	srand(time(NULL));
	
	int secretNumber = rand()%100 + 1;
	int guess = 0; 
	int numGuess = 0;

	cout<<"Let's Start the Game!"<<endl;
	while(guess != secretNumber)
	{
		cout<<"Guess the number between 1 and 100=";
		cin>>guess;
		
		numGuess++;
		
		if(guess ==  secretNumber)
		{
			cout<<"Congratulations!You guessed the number in "<<numGuess<<"guesses"<<endl;
		}
		else if(guess < secretNumber)
		{
			cout<<"Too low!Try again"<<endl;
		}
		else
		{
			cout<<"Too high!Try again"<<endl;
		}
	}
	return 0;
}
