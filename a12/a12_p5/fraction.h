#ifndef FRACTION_H
#define FRACTION_H

using namespace std;

class Fraction {

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    int gcd(int a, int b);      // calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();                 // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
                                // integers. Denominator by default is 1.

	// prints it to screen
    friend ostream& operator<<(ostream&, const Fraction&);
    friend istream& operator>>(istream&, Fraction&);
    Fraction operator*(Fraction&);
    Fraction operator/(Fraction&);
    
    // overloaded operators instead of print() service method
    // new operations
    Fraction operator+ (const Fraction&);
    Fraction operator- (const Fraction&);
    Fraction& operator= (const Fraction&);
    bool operator>(const Fraction&);
    bool operator<(const Fraction&);
    // fractions are entered as num / num in cin.
    // entering a 0 as a denominator is not allowed
};

#endif /* FRACTION_H_ */
