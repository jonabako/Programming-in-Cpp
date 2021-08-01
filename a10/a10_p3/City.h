#include <string>

class City
{
private:
	std::string name;
	long unsigned int population;
	std::string mayor;
	float area;

public:

	void setName(std::string&);
	void setPop(long unsigned int);
	void setMayor(std::string&);
	void setArea(float);
	
	std::string getName();
	long unsigned int getPop();
	std::string getMayor();
	float getArea();
	
	void print();
};
