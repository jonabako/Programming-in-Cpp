#include <iostream>
#include <string>
class Car{
	private:
		std::string brand;
		std::string model;
		double price;
	public:
		Car(std::string, std::string, double);
		~Car();
		
		void setBrand(std::string);
		void setModel(std::string);
		void setPrice(double);
		
		std::string getBrand();
		std::string getModel();
		double getPrice();
};

inline Car::Car(std::string b, std::string m, double p){
	brand = b;
	model = m;
	price = p;
}

inline Car::~Car(){
	std::cout<<"Car destructed!\n";
}

inline void Car::setBrand(std::string newbrand){
	brand = newbrand;
}
inline void Car::setModel(std::string newmodel){
	model = newmodel;
}
inline void Car::setPrice(double newprice){
	price = newprice;
}

inline std::string Car::getBrand(){
	return brand;
}

inline std::string Car::getModel(){
	return model;
}

inline double Car::getPrice(){
	return price;
}
