#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

Complex::Complex(){
	real = imag = 0;
}
Complex::Complex(int r, int i){
	real = r;
	imag = i;
}
Complex::Complex(const Complex& c){
	real = c.real;
	imag = c.imag;
}
Complex::~Complex(){
}

void Complex::setReal(int r){
	real = r;
}
void Complex::setImag(int i){
	imag = i;
}

int Complex::getReal(){
	return real;
}
int Complex::getImag(){
	return imag;
}

Complex Complex::conjugate(){
	Complex con = Complex(*this);
	con.imag = this->imag*(-1);
	return con;
}

istream& operator>>(istream& input, Complex& c){
	cout<<"real part: ";
	input>>c.real;
	cout<<"imaginary part: ";
	input>>c.imag;
	return input;
}

ostream& operator<<(ostream& output, const Complex& c){
	if(!c.imag)
		output<<c.real;
	else{
		if(c.imag>0)
			output<<c.real<<"+"<<c.imag<<"i";
		else
			output<<c.real<<c.imag<<"i";
	}
	return output;
}

Complex Complex::operator+(const Complex& c){
	Complex sum;
	sum.real = this->real + c.real;
	sum.imag = this->imag + c.imag;
	return sum;
}

Complex Complex::operator-(const Complex& c){
	Complex dif;
	dif.real = this->real - c.real;
	dif.imag = this->imag - c.imag;
	return dif;	
}

Complex Complex::operator*(const Complex& c){
	Complex prod;
	prod.real = this->real*c.real - this->imag*c.imag;
	prod.imag = this->real*c.imag + this->imag*c.real;
	return prod;
}

Complex Complex::operator=(const Complex& c){
	this->real = c.real;
	this->imag = c.imag;
	return *this;
}

int Complex::magnitude(){
	return sqrt(pow(this->real, 2)+pow(this->imag, 2));
}

bool Complex::operator>(Complex c){
	return (this->magnitude() > c.magnitude() ? true : false);
}

bool Complex::operator<(Complex c){
	return (this->magnitude() < c.magnitude() ? true : false);
}
