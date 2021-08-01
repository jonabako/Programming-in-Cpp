#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
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
	cout << "\nFraction (1): ";
    cout << e << endl;
    cout << "Fraction (2): ";
	
	// compute and print their product and division
	cout << f << endl; 
    cout << "\nProduct of fractions:" << endl;
	cout << e*f << endl;
    cout << "\nDivision of fractions:" << endl;
    cout << e/f << endl;
	return 0;
}
