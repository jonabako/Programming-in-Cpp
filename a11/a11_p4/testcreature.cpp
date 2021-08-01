#include <string>
#include <iostream>
#include "Creature.h"

using namespace std;

int main() {

	string word;
	
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
	while(1){
		cout << "\nEnter a creature you want to create or quit to exit:\n";
		cout << "(wizard / dragon / elf) || (quit)\n";
		cin>>word;
		if(word=="wizard"){
	    	cout << "\nCreating a Wizard...\n";
	    	Wizard *w;
	    	w = new Wizard;
	    	w -> run();
	    	w -> hover();
	    	delete w;
		}
	    else if(word=="dragon"){
		    cout << "\nCreating a Dragon...\n";
		    Dragon *d;
		    d = new Dragon;
		    d -> run();
		    d -> fly();
		    delete d;
		}
	    else if(word=="elf"){
			cout << "\nCreating an Elf...\n";
		    Elf *e;
		    e = new Elf;
		    e -> run();
		    e -> dig();
		    delete e;
		}
		else if(word=="quit"){
			cout<<"\nBye:)\n";
			break;
		}
		else
            cout << "\nInvalid input!\n";
	}
	
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    return 0;
}
