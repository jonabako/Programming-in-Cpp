#include <iostream>
#include <string>
#include "Critter.h"

using namespace std;

int main(){

	Critter one = Critter();
	Critter two = Critter("fluffy");
	Critter three = Critter("puffy", 2, 30, 4);
	Critter four = Critter("buffy", 2, 20);
	
	one.print();
	two.print();
	three.print();
	four.print();
	
	return 0;
}
