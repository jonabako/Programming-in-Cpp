#include <iostream>
#include "City.h"

using namespace std;

int main(){

	City one, two, three;
	City list[3]={one, two, three};

	string name, mayor;
	long unsigned int population;
	float area;
	
	for(int i = 0; i < 3; i++){
		cout << "Please enter data for city "<<i+1<<":\n";
		
		cout << "Name of city: ";
		cin >> name;
		list[i].setName(name);
		
		cout << "Number of inhabitants: ";
		cin >> population;
		list[i].setPop(population);
		cin.ignore(100, '\n');
		
		cout << "Name of city mayor: ";
		getline(cin, mayor);
		list[i].setMayor(mayor);
		
		cout << "Area of city: ";
		cin >> area;
		list[i].setArea(area);
		cout<<"\n";
	}
	
	for(int i = 0; i < 3; i++){
		cout<<"\nData for city "<<i+1<<":\n";
		list[i].print();
    }
	return 0;
}

// test input:
/*
Bremen
567559
Andreas Bovenschulte
326.73
Paris
12278210
Anne Hidalgo
105.4
London
9304000
Sadiq Khan
1572
*/
