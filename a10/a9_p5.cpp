#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
	string name;
	int die, guess;
	int count = 0;
	cout<<"Enter your name: ";
	cin>>name;
	srand(static_cast<unsigned int>(time(0)));
	die = (rand()%100)+1;
	cout<<"Random number between 1 and 100 successfully generated!\n";
	cout<<"Guess the randomly generated number: ";
	while(1){
		cin>>guess;
		count++;
		if(guess==die){
			cout<<"Congratulations "<<name<<"!\n";
			if(count==1)
				cout<<"You guessed correctly at the first try!\n";
			else
				cout<<"You guessed correctly after "<<count<<" tries!\n";
			break;
		}
		else if(guess>die)
			cout<<"Too high! Try again: ";
		else if(guess<die)
			cout<<"Too low! Try again: ";		
	}
	return 0;
}
