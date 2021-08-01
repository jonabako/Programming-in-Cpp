#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

/*
	 Diagram of class relations: 
				 Area
			   /     \
		   Circle  Rectangle
		    /         \
		 Ring		 Square
*/

const int num_obj = 7;
int main() {
	Area *list[num_obj]; // (1) declare pointer array of Area type with size 7
	int index = 0; // (2) initialize an index for the loop
	double sum_area = 0.0; // (3) initialize sum of area to 0 before while loop
	double sum_perimeter = 0.0; // initialize sum of perimeter to 0 before loop
	
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2); // (4) create ring object with set parameters
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square pink_square("PINK", 50);
	
	list[0] = &blue_ring; // (5) store created ring in element 0 of array
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &pink_square;
	
	while (index < num_obj) { // (7) condition for number of loops
		(list[index])->getColor();
		double area = list[index]->calcArea(); // (8) index++ iterates 
		// through the list. -> operator fot a pointer to call the 
		// calcArea method for each element of array
		double perimeter = list[index++]->calcPerimeter();
		sum_perimeter+= perimeter;
		sum_area += area;
	}

	cout << "\n\nThe total perimeter is "
			<< sum_area << " units " << endl; // print total perimeter
	cout << "\nThe total area is "
			<< sum_area << " square units " << endl; // (9) print total area
	
	// release memory
	list[num_obj] = NULL;
	delete list[num_obj];
	
	return 0;
}
