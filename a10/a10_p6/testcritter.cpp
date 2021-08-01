#include <iostream>
#include "Critter.h"

using namespace std;

int main()
{
    string name;

    // no given properties
    Critter critter_1;
    critter_1.setHunger(2);
    critter_1.print();
    
	// only name parameter
    Critter critter_2(name);
    critter_2.setHunger(2);
    critter_2.print();
    
	// supply values for all parameters
    Critter critter_3_1("Alien", 4, 76, 23);
    critter_3_1.setHunger(2);
    critter_3_1.print();
    
	// test default value 10 with only three given parameters
    Critter critter_3_2("Grinch", 7, 80);
    critter_3_2.setHunger(2);
    critter_3_2.print();
    
	// test the constructor taking five parameters
	Critter critter_4("Puff", 5, 35, 23, 11.4); // only extra line
	
    return 0;
}
