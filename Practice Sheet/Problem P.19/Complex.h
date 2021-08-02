#include <iostream>
class Complex {
	private:
		float real; // real part
		float imag; // imaginary part
	public:
		Complex();
		Complex(float, float);
		double magnitude();
		
		friend bool operator>(Complex, Complex);
		friend bool operator<(Complex, Complex);
				
		friend std::ostream& operator<<(std::ostream&, const Complex&);
		friend std::istream& operator>>(std::istream&, Complex&);
};

