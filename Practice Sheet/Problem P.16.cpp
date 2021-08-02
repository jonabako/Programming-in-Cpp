#include <iostream>
#include <string>
class Car {
	protected: //private: 
		std::string brand;
		std::string model;
		double price;
	public:
		Car(std::string b, std::string m, double p){
			brand = b;
			model = m;
			price = p;
		}
		~Car(){
			std::cout<<"Car destroyed!\n";
		}
		
		//friend class Taxi;
		
		void setBrand(std::string newbrand){
			brand = newbrand;
		}
		void setModel(std::string newmodel){
			model = newmodel;
		}
		void setPrice(double newprice){
			price = newprice;
		}
		
		std::string getBrand(){
			return brand;
		}
		std::string getModel(){
			return model;
		}
		double getPrice(){
			return price;
		}
};

//-----------------------------------------------------------------------------

class Taxi : public Car {
	private:
		int passanger_nr;
	public:
		Taxi(std::string, std::string, double, int);
		~Taxi();
		
		void setPassangerNr(int);
		
		int getPassangerNr();
		
		void print();
};

Taxi::Taxi(std::string b, std::string m, double p, int max):Car(b, m, p){
	brand = b;
	model = m;
	passanger_nr = max;
	
}

Taxi::~Taxi(){
	std::cout<<"Taxi destroyed!\n";
}

void Taxi::setPassangerNr(int max){
	passanger_nr = max;
}

int Taxi::getPassangerNr(){
	return passanger_nr;
}

void Taxi::print(){
	std::cout<<"Taxi Brand: "<<brand<<std::endl;
	std::cout<<"Car Model: "<<model<<std::endl;
	std::cout<<"Car Price: "<<price<<" Euro\n";	
	std::cout<<"Limit of passangers: "<<passanger_nr<<" people\n";
}

//-----------------------------------------------------------------------------

int main(){
	Taxi cab("Mercedes-Benz", "E Klasse W212", 8989.99, 4);
	cab.print();
	return 0;
}
