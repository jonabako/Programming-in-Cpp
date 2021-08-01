#include <iostream>
#include "Shapes.h"

using namespace std;

int main(){
	Hexagon a, b, c;
	a.setColor("blue");
	a.setSide(9);
	b.setColor("green");
	b.setSide(15);
	c = Hexagon(b);
	
	Hexagon arr[3]= {a, b, c};
	
	cout<<"Data for the three hexagons:\n";
	for(int i = 0; i < 3; i++){
		cout<<"\nPerimeter of Hexagon "<<i+1<<": ";
		cout<<arr[i].perimeter()<<" units";
		cout<<"\nArea of Hexagon "<<i+1<<": ";
		cout<<arr[i].area()<<" square units";		
		cout<<endl;
	}
	return 0;
}
