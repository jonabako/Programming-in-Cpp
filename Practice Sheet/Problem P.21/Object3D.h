#ifndef __OBJECT3D_H
#define __OBJECT3D_H
class Object3D{
	private:
		std::string name;
	public:
		double virtual volume();
};
class Sphere: public Object3D{
	private:
		double radius;
	public:
		
};
class Cylinder : public Sphere{
	private:
		double radius;
		double height;
	public:
		
};
class RectPrism : public Object3D{
	private:
		double length;
		double width;
		double height;
	public:
		
};

class Cube: public RectPrism{
	private:
		double side;
	public:
		
};
#endif
