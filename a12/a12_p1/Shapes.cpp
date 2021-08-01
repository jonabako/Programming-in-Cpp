// please refer to shapes.h for methods documentation

#include <iostream>
#include <string>
#include <cmath>
#include "Shapes.h"

using namespace std; 
//-----------------------------------------------------------------------------
Shape::Shape(const string& n) : name(n) {
	name = n;
}
Shape::Shape(){
	name = "default_name";
}
Shape::Shape(const Shape& sh){
	name = sh.name;
}
void Shape::printName() const {
	cout << name << endl;
}
//-----------------------------------------------------------------------------
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(){
	x = 0;
	y = 0;
}
CenteredShape::CenteredShape(const CenteredShape& cs){
	x = cs.x;
	y = cs.y;
}
void CenteredShape::move(double nx, double ny){
}
//-----------------------------------------------------------------------------
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(){
	EdgesNumber = 0;
}
RegularPolygon::RegularPolygon(const RegularPolygon& rp){
	EdgesNumber = rp.EdgesNumber;
}
//-----------------------------------------------------------------------------
Hexagon::Hexagon(const string& n, double nx, double ny, double ns, const 
string& nc):RegularPolygon(n,nx,ny,6)
{
	side = ns;
	color = nc;
}
Hexagon::Hexagon(){
	side = 0;
	color = "default_color";
}
Hexagon::Hexagon(const Hexagon& h){
	side = h.side;
	color = h.color;
	name = h.name;
	x = h.x;
	y = h.y;
}
Hexagon::~Hexagon(){
}
	
void Hexagon::setSide(double ns){
	side = ns;
}
void Hexagon::setColor(const string& nc){
	color = nc;
}

double Hexagon::getSide(){
	return side;
}
const string& Hexagon::getColor(){
	return color;
}

double Hexagon::perimeter(){
	return 6*side;
}
double Hexagon::area(){
	return ((3*sqrt(3)*side*side)/2);
}
//-----------------------------------------------------------------------------
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}
Circle::Circle(){
	Radius = 0;
}
Circle::Circle(const Circle& c){
	Radius = c.Radius;
}
