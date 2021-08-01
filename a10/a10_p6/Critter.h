#include <string>

using namespace std;

/* First C++ class */
class Critter
{
private: // data members are private
	string name;
	int hunger;
	int boredom;
	double height;
	double thirst;
	
	double convert_to_double();
	void convert_to_int();
	
public: // business logic methods are public
	
    // three constructor methods
	Critter(); // no properties
    Critter(string name); // only name as parameter
    Critter(string temp_n, int temp_hu, int temp_b, double temp_he=10);
	// takes all parameters - sets default value for height
	Critter(string temp_n, int temp_hu, int temp_b, double temp_he, double th);
	// also takes new parameter thirst 
    
	// setter method
	void setHunger(int newhunger);
    void setThirst(double newthirst);
    
	// getter method
	int getHunger();
	double getThirst();
	
	// service method
    void print();
};
