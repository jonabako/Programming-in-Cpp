#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10){
	cout<<"Empty constructor (Creature) called!\n";
}

Creature::~Creature(){
    cout << "\nCreature destructed!\n";
}

void Creature::run() const{
    cout << "Running " << distance << " meters!\n";
}
  
//---------------------------------------------------------------------------

Wizard::Wizard() : distFactor(3){
	cout << "Empty Constructor (Wizard) called!\n";
}

Wizard::~Wizard(){
    cout << "\nWizard destructed!";
}

void Wizard::hover() const{
	cout << "Hovering " << (distFactor * distance) << " meters!\n";
}

//---------------------------------------------------------------------------

Dragon::Dragon() : HeightFactor(5){
	cout << "Empty Constructor (Dragon) called!\n";
}

Dragon::~Dragon(){
    cout << "\nDragon destructed!";
}

void Dragon::fly() const
{
	cout <<"Flying "<< (HeightFactor * distance) <<" meters above ground!\n";
}

//---------------------------------------------------------------------------

Elf::Elf() : DepthFactor(2){
	cout << "Empty Constructor (Elf) called!\n";
}

Elf::~Elf(){
    cout << "\nElf destructed!";
}
	
void Elf::dig() const // dig method
{
	cout << "Digging " << (DepthFactor * distance) << " meters below ground level!\n";
}
