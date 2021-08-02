#include <iostream>
#include <string>
#include "Worker.h"

using namespace std;

worker::worker() { }
worker::worker(int rn, string n){
	reg_nr = rn;
	name = n;
}
worker::~worker() { }
	
ostream& operator<<(ostream& output, const worker& w){
	output << "Worker Registration Nr.: " << w.reg_nr << endl
	<< "Name of worker: " << w.name << endl;
	
	return output;
}
istream& operator>>(istream& input, worker& w){
	cout << "Registration number: ";
	input >> w.reg_nr;
	cout << "Worker name: ";
	input >> w.name;
}
