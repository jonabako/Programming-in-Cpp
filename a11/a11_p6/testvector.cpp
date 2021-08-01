#include <iostream>
#include "Vector.h"

using namespace std;

int main(){
	double a[] = {2.5, 6.7, 8.5, 3.4, 1.1};
	double b[] = {12.0, 1.8, 2.3, 0.8, 2.1};

	Vector v1 = Vector(5, a);
	cout<<"Vector 1: (with parameter constructor):\n";
	v1.print();
	
	Vector v2 = Vector(v1);
	cout<<"Vector 2 (with copy constructor):\n";
	v2.print();	
	
	Vector v3 = Vector();
	cout<<"Vector 3: (with empty constructor):\n";
	v3.print();	
	
	v3.setSize(5);
	v3.setMemory(b);
	cout<<"Vector 3: (after setting size and data):\n";
	v3.print();	
	
	
	cout<<"\nNorm of vector 1:\n"<<v1.norm()<<endl;
	cout<<"Scalar product of vector 1 and 3:\n"<<v1.mult(v3)<<endl;
	cout<<"Sum of vector 1 and 3:\n";
	(v1.add(v3)).print();
	cout<<"Difference of vector 1 and 3:\n";
	(v1.sub(v3)).print();	
	
	return 0;
}
