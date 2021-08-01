#include <iostream>
#include "Creature.h"

using namespace std;

int main() { 
    
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();
 
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    
    cout << "\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.fly();
 
    cout << "\nCreating an Elf.\n";
    Elf e;
    e.run();
    e.dig();
    
    return 0;
}
