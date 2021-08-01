/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
		void setName(std::string);
		std::string getName();
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		void getX(double);
		void getY(double);
		double setX();
		double setY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void getEdgesNumber(int);
		int setEdgesNumber();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		void getRadius(double);
		double setRadius();
		double perimeter();
		double area();
};

class Rectangle : public RegularPolygon{
	private:
		double width;
		double height;
	public:
		Rectangle(const std::string& n, double nx, double ny, double nwidth, 
		double nheight);
		Rectangle();
		Rectangle(const Rectangle&);
		void getWidth(double);
		void getHeight(double);
		double setWidth();
		double setHeight();
		double perimeter();
		double area();
};

class Square : public Rectangle{
	private:
		double side;
	public:
		Square(const std::string& n, double nx, double ny, double nside);
		Square();
		Square(const Square&);
		void setSide(double);
		double getSide();
		double perimeter();
		double area();
};
    
#endif
