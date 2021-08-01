#include <iostream>
#include "Box.h"

using namespace std;

Box::Box(){
	height = width = depth = 0;
}
Box::Box(double h, double w, double d){
	height = h;
	width = w;
	depth = d;	
}
Box::Box(const Box &b){
	height = b.height;
	width = b.width;
	depth = b.depth;	
}
Box::~Box(){
}

void Box::getHeight(double h){
	height = h;
}
void Box::getWidth(double w){
	width = w;
}
void Box::getDepth(double d){
	depth = d;
}

double Box::setHeight(){
	return height;
}
double Box::setWidth(){
	return width;
}
double Box::setDepth(){
	return depth;
}

double Box::Volume(){
	return height*width*depth;
}
