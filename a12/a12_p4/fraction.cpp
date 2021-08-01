#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
    
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);

}

ostream& operator<<(ostream& output, const Fraction& frac)
{
    output << frac.num << "/" << frac.den; // overloaded operator <<
    return output;
}

istream& operator>>(istream& input, Fraction& frac){
    cout << "n: ";
	input >> frac.num;
	while(1){
		cout << "d: ";
        input >> frac.den;
        // undefined function if denumerator = 0, therefore re-enter value
        if(frac.den == 0)
            cout << "Undefined fraction! Re-enter denumerator:" << endl;
        else
        	break;
    }
    return input;
}

// for computing the multiplication of two fractions
Fraction Fraction::operator*(Fraction &frac) {
    Fraction p(this -> num*frac.num / gcd(this -> num*frac.num, 
	this -> den*frac.den), this -> den*frac.den / gcd(this -> 
	num*frac.num, this -> den*frac.den));
    
	return p;
}

// for computing the division of two fractions
Fraction Fraction::operator/(Fraction &frac) {
    Fraction d(this -> num*frac.den / gcd(this -> num*frac.den, 
	this -> den*frac.num), this -> den*frac.num / gcd(this -> 
	num*frac.den, this -> den*frac.num));
    
	return d;
}
