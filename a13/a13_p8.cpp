#include <iostream>

using namespace std;

// provide constructors and destructors for each class

// Car Class
class Car {
	public:
	    Car();
	    ~Car() { }
};

Car::Car() { }

// Motor Class
class Motor {
	public:
	    Motor();
	    ~Motor() { }
};

class MotorException : public exception {
    const char * what() const throw() {
        // throw string
		return "This motor has problems";
    }
};

Motor::Motor() {
    throw MotorException();
}

// Garage class that has a Car
class Garage : public Car {
	public:
	    Garage();
	    ~Garage() { }
};

Garage::Garage() {
    try{
        Car();
        Motor();
    }
    catch (const exception& motor_exc){
        cerr << motor_exc.what() << endl;
        // throw a different string for exception
		throw "The car in this garage has problems with the motor";
    }
}

int main() {
    try {
        Garage garage;
    }
    catch (const char *garage_exc) {
        cerr << "Exception caught:" << endl << garage_exc << endl;
    }
    return 0;
}
