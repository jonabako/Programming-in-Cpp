#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger, tireness;
	double weight;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	cout << "Weight: ";
	cin >> weight;
	c.setWeight(weight);
	cout << "Tireness: ";
	cin >> tireness;
	c.setTireness(tireness);
	cout << "You have created:" << endl;
	c.print();
        return 0;
}
