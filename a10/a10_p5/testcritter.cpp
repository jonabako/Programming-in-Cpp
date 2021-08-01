#include <iostream>
#include <string>
#include "Critter.h"

using namespace std;

int main(){

	Critter one = Critter();
	Critter two = Critter("fluffy");
	Critter three = Critter("puffy", 60, 30, 4);
	Critter four = Critter("buffy", 80, 20);
	
	one.print();
	two.print();
	three.print();
	four.print();
	(Critter("muffy", 30, 70, 8, 20.5)).print();
	
	return 0;
}
