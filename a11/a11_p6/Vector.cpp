#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

Vector::Vector(){
	size = 0;
	ptr = NULL;
}
Vector::Vector(int n, double* arr){
	size = n;
	ptr = new double[size];
	for(int i = 0; i < size; i++)
		ptr[i] = arr[i];
}
Vector::Vector(const Vector& v){
	size = v.size;
	ptr = new double[v.size];
	for(int i = 0; i < size; i++)
		ptr[i]=v.ptr[i];
}
Vector::~Vector(){
	delete ptr;
}

void Vector::setSize(int n){
	size = n;
	ptr = new double[size];
}
void Vector::setMemory(double* arr){
	ptr = new double[size];
	for(int i = 0; i < size; i++)
		ptr[i]=arr[i];
}

int Vector::getSize(){
	return size;
}
double* Vector::getMemory(){
	return ptr;
}

void Vector::print(){
	cout<<"( ";
	for(int i = 0; i < size; i++){
		cout<<ptr[i];
		if(i<(size-1))
			cout<<", ";
	}
	cout<<" )\n";
}
double Vector::norm(){
	double norm = 0;
	for(int i; i < size; i++)
		norm = norm + ptr[i]*ptr[i];
	return sqrt(norm);
}
Vector Vector::add(const Vector v) const{
	Vector sum;
	sum.size = size;
	double temp[size];
	for(int i; i < size; i++)
		temp[i] = ptr[i] + v.ptr[i];
	sum.setMemory(temp);
	return sum;
}
Vector Vector::sub(const Vector v) const{
	Vector dif;
	dif.size = size;
	double temp[size];
	for(int i; i < size; i++)
		temp[i] = ptr[i] - v.ptr[i];
	dif.setMemory(temp);
	return dif;
}
double Vector::mult(const Vector v) const{
	double prod;
	for(int i; i < size; i++)
		prod = prod + (ptr[i]*v.ptr[i]);
	return prod;
}
