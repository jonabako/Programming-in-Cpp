#include <iostream>
#include <string>
#include "Critter.h"

using namespace std;

Critter::Critter(){
	name = "default_critter";
	height = 5;
	hunger = boredom = 0;
	
}

Critter::Critter(string n){
	name = n;
	height = 5;
	hunger = boredom = 0;
}

Critter::Critter(string n, int hu, int b, int he){
	name = n;
	hunger = hu;
	boredom = b;
	height = he;
}

void Critter::print(){
	cout<<"Critter Data:\n"<<"Name = "<<name<<"\nHunger = "<<hunger
	<<"\nBoredom = "<<boredom<<"\nHeight = "<<height<<"\n\n";
}
