#include <iostream>
#include "City.h"

using namespace std;

void City::setName(string& newname){
	name = newname;
}
void City::setPop(long unsigned int newpopulation){
	population = newpopulation;
}
void City::setMayor(string& newmayor){
	mayor = newmayor;
}
void City::setArea(float newarea){
	area = newarea;
}

string City::getName(){
	return name;
}
long unsigned int City::getPop(){
	return population;
}
string City::getMayor(){
	return mayor;
}
float City::getArea(){
	return area;
}

void City::print(){
	cout<<"The name of the city is "<<name<<".\n";
	cout<<name<<" has "<<population<<" inhabitants.\n";
	cout<<mayor<<" is the current mayor of "<<name<<".\n";
	cout<<"The area of "<<name<<" is "<<area<<" square kilometers.\n";
}
