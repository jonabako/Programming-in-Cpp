#include <iostream>
#include "fraction.h"

using namespace std;

int main(){
	// create and print fractions with given parameters
    Fraction a(4, 2);
    Fraction b(17, 11);
    Fraction c(5);
    cout << "Three fractions with set parameters:" << endl;
	cout << a << endl << b << endl << c << endl;
    
    // create and print fraction with input
    Fraction d;
    cout << "\nEnter a numerator and denumerator to create a fraction:\n";
	cin >> d;
	cout << "Created fraction: ";
    cout << d << endl;
    
	// create and print fractions with input
    Fraction e, f;
	cout << "\nEnter two fractions:" << endl;
    cout << "Enter fraction (1):" << endl;
	cin >> e;
    cout << "Enter fraction (2):" << endl;
	cin >> f;	
	cout << "\nFraction (1): " << e << endl;
    cout << "Fraction (2): " << f << endl;
	
	// compute and print results for each overloaded operator 
    cout << "\nProduct of fractions:" << e*f << endl;
    cout << "\nDivision of fractions:" << e/f << endl;
	cout << "\nSum of fractions:" << e+f << endl;
	cout << "\nDifference between fractions:" << e-f << endl;
    cout << "\nFraction " << (e > f ? e : f) << " is larger than " 
	<< (e < f ? e : f) << endl;
	Fraction x = Fraction(2, 3);
	cout << "\nFraction x = " << x << endl;
	Fraction y = x;
	cout << "\nFraction y equal to x = " << y << endl;
	
	return 0;
}
