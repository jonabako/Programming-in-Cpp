#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main(){
	
	ifstream f1, f2;
	ofstream f3;
	f1.open("in1.txt");
	if(!f1){
		cout<"Input file cannot open!\n";
		exit(1);
	}
	f2.open("in2.txt");
	if(!f2){
		cout<"Input file cannot open!\n";
		f1.close();
		exit(2);
	}
	f3.open("output.txt");
	if(!f3){
		cout<"Input file cannot open!\n";
		f1.close();
		f2.close();
		exit(3);
	}
	
	int ra, rb, ia, ib;
	f1>>ra>>ia;
	f2>>rb>>ib;
	
	Complex a(ra, ia);
	Complex b(rb, ib);
	
	cout<<"First complex number = "<<a<<endl;
	cout<<"Second complex number = "<<b<<endl;
	cout<<"Sum of the complex numbers = "<<a+b<<endl;
	cout<<"Difference of the complex numbers = "<<b-a<<endl;
	cout<<"Multiplication of the complex numbers = "<<a*b<<endl;
	
	f3<<"Sum of the complex numbers = "<<a+b<<endl;
	f3<<"Difference of the complex numbers = "<<b-a<<endl;
	f3<<"Multiplication of the complex numbers = "<<a*b<<endl;

	f1.close();
	f2.close();
	f3.close();
	
	return 0;
}
