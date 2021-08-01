#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
	private:
		int real;
		int imag;
	public:
		Complex();
		Complex(int, int);
		Complex(const Complex&);
		~Complex();
		
		void setReal(int);
		void setImag(int);
		
		int getReal();
		int getImag();
		
		int magnitude();
		Complex conjugate();
		friend std::istream& operator>>(std::istream&, Complex&);
		friend std::ostream& operator<<(std::ostream&, const Complex&);
		Complex operator+(const Complex&);
		Complex operator-(const Complex&);
		Complex operator*(const Complex&);
		Complex operator=(const Complex&);
		bool operator>(Complex);
		bool operator<(Complex);
};

#endif
