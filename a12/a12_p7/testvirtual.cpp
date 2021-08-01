#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
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

const int num_obj = 25;
int main() {
	Area *list[num_obj]; // (1) declare pointer array of Area type with size 7
	int index = 0; // (2) initialize an index for the loop
	double sum_area = 0.0; // (3) initialize sum of area to 0 before while loop
	double sum_perimeter = 0.0; // initialize sum of perimeter to 0 before loop
	string shape, color;
	int n1, n2;
	string sh[4] = {"Circle", "Rectangle", "Ring", "Square"};
	string col[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
	int s[96] = {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,
				27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
				48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,
				69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,
				90,91,92,93,94,95,96,97,98,99,100};
				
	for(int i=0; i<25; i++){
		srand(time(0)+i);
		shape = sh[rand()%4];
		color = col[rand()%4];
		n1 = s[rand()%96];
		n2 = s[rand()%96];
			
		if(shape=="Circle"){
			cout << "Creating Circle: ";
			if(color=="RED"){
				list[i] = new Circle("RED", n1);
			}
			else if(color=="BLACK"){
				list[i] = new Circle("BLACK", n1);
			}
			else if(color=="VIOLET"){
				list[i] = new Circle("VIOLET", n1);
			}
			else if(color=="BLUE"){
				list[i] = new Circle("BLUE", n1);
			}
		}
		else if(shape=="Rectangle"){
			cout << "Creating Rectangle: ";
			if(color=="RED"){
				list[i] = new Rectangle("RED", n1, n2);
			}
			else if(color=="BLACK"){
				list[i] = new Rectangle("BLACK", n1, n2);
			}
			else if(color=="VIOLET"){
				list[i] = new Rectangle("VIOLET", n1, n2);
			}
			else if(color=="BLUE"){
				list[i] = new Rectangle("BLUE", n1, n2);
			}
		}
		else if(shape=="Ring"){
			cout << "Creating Ring: ";
			if(color=="RED"){
				list[i] = new Ring("RED", n1, n2);
			}
			else if(color=="BLACK"){
				list[i] = new Ring("BLACK", n1, n2);
			}
			else if(color=="VIOLET"){
				list[i] = new Ring("VIOLET", n1, n2);
			}
			else if(color=="BLUE"){
				list[i] = new Ring("BLUE", n1, n2);
			}
		}
		else if(shape=="Square"){
			cout << "Creating Square: ";
			if(color=="RED"){
				list[i] = new Square("RED", n1);
			}
			else if(color=="BLACK"){
				list[i] = new Square("BLACK", n1);
			}			
			else if(color=="VIOLET"){
				list[i] = new Square("VIOLET", n1);
			}			
			else if(color=="BLUE"){
				list[i] = new Square("BLUE", n1);
			}
		}
	}
	
	while (index < num_obj) { // (7) condition for number of loops
		(list[index])->getColor();
		double area = list[index]->calcArea(); // (8) index++ iterates 
		// through the list. -> operator fot a pointer to call the 
		// calcArea method for each element of array
		double perimeter = list[index++]->calcPerimeter();
		
		
		cout << "\nPerimeter = " 
		<< perimeter << " units" << endl; // print perimeter
		cout << "Area = " 
		<< area << " square units " << endl; // (9) print area
			
		sum_perimeter+= perimeter;
		sum_area += area;
	}
	
	cout << "\nThe total perimeter is "<< sum_perimeter << " units" <<endl; // print total perimeter
	cout << "\nThe total area is "<< sum_area << " square units " << endl; // (9) print total area
	
	// deallocate memory for the list
	list[num_obj]=NULL;
	delete list[num_obj];
	
	return 0;
}
