#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
class Creature {
    public:
        Creature();  
        void run() const;
        ~Creature();
 
    protected:
        int distance;
};
 
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
class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;
        ~Wizard();
 
    private:
        int distFactor;
};
 
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
class Dragon : public Creature {
    public:
        Dragon();
        void fly() const;
        ~Dragon();
 
    private:
        int HeightFactor;
};
 
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
class Elf : public Creature {
    public:
        Elf();
        void dig() const;
        ~Elf();
 
    private:
        int DepthFactor;
};
 
Elf::Elf() : DepthFactor(2){
    cout << "Empty Constructor (Elf) called!\n";
}
 
Elf::~Elf(){
    cout << "\nElf destructed!";
}
    
void Elf::dig() const
{
    cout << "Digging " << (DepthFactor * distance) 
	<< " meters below ground level!\n";
}
//---------------------------------------------------------------------------
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
