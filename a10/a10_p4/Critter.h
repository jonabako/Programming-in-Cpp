#include <string>

class Critter{
	
	private:
	
		std::string name;
		int hunger;
		int boredom;
		int height;
	
	public:
	
		Critter();
		Critter(std::string);
		Critter(std::string, int, int, int = 10);
		
		void print();
		
};
