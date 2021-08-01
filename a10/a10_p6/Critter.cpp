#include <iostream>
#include "Critter.h"

using namespace std;

// method bodies for converting mainpulated double value of hunger to int

// in percentage form (* 100) - meaning internally a decimal value from 0 to 1
double Critter::convert_to_double(){
    return((double)hunger/10.0); // internally at 0.2 (double)
}

// hunger levels externally at 2 (int)
void Critter::convert_to_int(){
    double h = convert_to_double();
	hunger = (int)(10.0*h);
}

void Critter::setHunger(int newhunger){
    hunger = newhunger;
    convert_to_double();
	convert_to_int();
}

int Critter::getHunger(){
    return hunger;
}

void Critter::print(){
	cout << "\nI am " << name << ".\n";
	cout << "My hunger level is " << hunger << ".\n";
	cout << "My boredom level is " << boredom << ".\n";
	cout << "My thirst level is " << thirst << ".\n";
	cout << "My height is " << height << " cm.\n\n";
}

Critter::Critter()
{
    // default values for all parameters
    name = "default_critter";
    height = 5.0;
    boredom = 0;
    hunger = 0.0;
    convert_to_double();
	convert_to_int();
    thirst = double(hunger);
    cout << "Constructor (1) is called.";
}

Critter::Critter(string temp_name){
    // default values for constructor with only name as a parameter
    name = "0";
    hunger = 0.0;
    boredom = 0;
    height = 5.0;
    convert_to_double();
	convert_to_int();
	thirst = double(hunger);
    cout << "Constructor (2) is called.";
}

Critter::Critter(string temp_n, int temp_hu, int temp_b, double temp_he){
    // different values for all parameters
    name = temp_n;
    hunger = temp_hu;
	convert_to_double();
	convert_to_int();
	boredom = temp_b;
    height = temp_he;
    thirst = (double)hunger;
    cout << "Constructor (3) is called.";
}

Critter::Critter(string temp_n, int temp_hu, int temp_b, 
				 double temp_he, double th){
	name = temp_n;
    hunger = temp_hu;
	convert_to_double();
	convert_to_int();
	boredom = temp_b;
    height = temp_he;
    thirst = th;
    cout << "Constructor (4) is called.";
    cout << "\nI am " << name << ".\n";
	cout << "My hunger level is " << hunger << ".\n";
	cout << "My boredom level is " << boredom << ".\n";
	cout << "My thirst level is " << thirst << ".\n";
	cout << "My height is " << height << " cm.\n";
}
