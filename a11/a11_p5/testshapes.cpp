#include <iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {

	Circle c("first circle", 3, 4, 7);
	RegularPolygon r("TRIANGLE", 1, 1, 3);
	
	r.printName();
	c.printName();
	
	Circle circ("second circle", 5, 3, 2);
	Rectangle rec("RECTANGLE", 2, 2, 5, 6);
	Square sq("square", 2, 2, 3);
	
	cout<<"\nData for: ";
	circ.printName();
	cout<<"Perimeter = "<<circ.perimeter()<<endl;
	cout<<"Area = "	<<circ.area()<<endl;

	cout<<"\nData for: ";
	rec.printName();
	cout<<"Perimeter = "<<rec.perimeter()<<endl;
	cout<<"Area = "	<<rec.area()<<endl;
	
	cout<<"\nData for: ";
	sq.printName();
	cout<<"Perimeter = "<<sq.perimeter()<<endl;
	cout<<"Area = "	<<sq.area()<<endl;
	
	return 0;
}
