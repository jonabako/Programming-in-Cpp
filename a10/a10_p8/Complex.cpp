#include <iostream>
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

void Complex::print(){
	if(!imag)
		cout<<real;
	else{
		if(imag>0)
			cout<<real<<"+"<<imag<<"i";
		else
			cout<<real<<imag<<"i";
	}
	cout<<endl;
}
Complex Complex::conjugate(){
	Complex con = Complex(*this);
	con.imag = this->imag*(-1);
	return con;
}
Complex Complex::add(Complex c){
	Complex sum;
	sum.real = this->real + c.real;
	sum.imag = this->imag + c.imag;
	return sum;
}
Complex Complex::sub(Complex c){
	Complex dif;
	dif.real = this->real - c.real;
	dif.imag = this->imag - c.imag;
	return dif;	
}
Complex Complex::multiply(Complex c){
	Complex prod;
	prod.real = this->real*c.real - this->imag*c.imag;
	prod.imag = this->real*c.imag + this->imag*c.real;
	return prod;
}
