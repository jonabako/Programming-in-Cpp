#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setTireness(int newtireness){
	tireness = newtireness;
}

void Critter::setWeight(double newweight){
	weight = newweight;
}

void Critter::print() {
	cout << "I am " << name << "." << endl << "My hunger level is " << 
	hunger << "." << endl << "My weight is " << weight << " kg." << 
	endl << "My tireness level is " << tireness << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getTireness(){
	return tireness;
}

double Critter::getWeight(){
	return weight;
}
