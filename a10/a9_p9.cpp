#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <algorithm>

using namespace std;
string word(string s);

int main(){
	string s[17] = {"computer", "television", "keyboard", "laptop", "mouse", "nursery", "dynamic", "scholar", 
	"beneficiary", "hardware", "worry", "resignation", "cigarette", "suburb", "expand", "digital", "tray"};
	string name, random, guess, answer;
	cout<<"Enter your name: ";
	cin>>name;
	
	int count = 1;
	while(1){
		srand(static_cast<unsigned int>(time(0)));
		random = s[rand()%17];
		cout<<"\nGuess the word: "<<word(random)<<endl;
		cin>>guess;

		while(guess!=random){
			if(guess=="quit"){
				cout<<"\nThanks for playing "<<name<<"! Bye:)\n";
				exit(1);
			}
			else{
				cout<<"Wrong guess! Try again:\n";
				cin>>guess;
				count++;
			}
		}

		cout<<"Congratulations "<<name<<"!\n";
		if(count==1)
			cout<<"You guessed correctly at the first try!\n";
		else
			cout<<"You guessed correctly after "<<count<<" tries!\n";
		cout<<"Do you want to play again? (Yes/No)\n";
		cin>>answer;

		while(answer!="Yes" && answer!="No"){
			cout<<"Invalid! Re-answer:\n";
			cin>>answer;
		}
		if(answer=="No"){
			cout<<"\nThanks for playing "<<name<<"! Bye:)\n";
			exit(2);		
		}
	}
	return 0;
}
string word(string s){
	replace(s.begin(), s.end(), 'a' , '_');
	replace(s.begin(), s.end(), 'e' , '_');
	replace(s.begin(), s.end(), 'i' , '_');
	replace(s.begin(), s.end(), 'o' , '_');
	replace(s.begin(), s.end(), 'u' , '_');
	return s;
}
