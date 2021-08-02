#include <iostream>
#include "Complex.h"
#include <cmath>

Complex::Complex(){
	real = imag = 0;
}
Complex::Complex(float r, float i){
	real = r;
	imag = i;
}

std::ostream& operator<<(std::ostream& output, const Complex& c){
	if(c.imag){
		if(c.imag>0)
			output << c.real << " + " <<  c.imag << "i";
		if(c.imag<0)
			output << c.real << " - " <<  (-1)*c.imag << "i";
	}
	else
		output << c.real << std::endl;
	return output;
}
std::istream& operator>>(std::istream& input, Complex& c){
	std::cout << "Real part: " ;
	input >> c.real ;
	std::cout << "Imaginary part: ";
	input >> c.imag;
	return input;
}

double Complex::magnitude(){
	return (sqrt(pow(real, 2) + pow(imag, 2)));
}

bool operator>(Complex c1, Complex c2){
	if(c1.magnitude() > c2.magnitude())
		return true;
	else
		return false;
}

bool operator<(Complex c1, Complex c2){
	if(c1.magnitude() < c2.magnitude())
		return true;
	else
		return false;
}
