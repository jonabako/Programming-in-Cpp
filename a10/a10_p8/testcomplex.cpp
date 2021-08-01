#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
	Complex a(2, 5);
	Complex b(6, 3);
	cout<<"First complex number = ";
	a.print();
	cout<<"\nSecond complex number = ";
	b.print();
	cout<<"\nConjugate of the first complex number = ";
	(a.conjugate()).print();
	cout<<"\nSum of the complex numbers = ";
	(a.add(b)).print();
	cout<<"\nDifference of the complex numbers = ";
	(b.sub(a)).print();
	cout<<"\nMultiplication of the complex numbers = ";
	(a.multiply(b)).print();
	return 0;
}

