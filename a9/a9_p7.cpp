#include <iostream>

using namespace std;

void swapping(int &a, int &b) { // swap ints
	int temp = a;
	a = b;
	b = temp;
}
void swapping(float &a, float &b) { // swap floats
	float temp = a;
	a = b;
	b = temp;
}
void swapping(const char *&p1, const char *&p2) { // swap char pointers
	const char *temp = p1;
	p1 = p2;
	p2 = temp;
}
int main(void) {
	int a = 7, b = 15;
	float x = 3.5, y = 9.2;
	const char *str1 = "One";
	const char *str2 = "Two";
	
	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
	
	swapping(a, b);
	swapping(x, y);
	swapping(str1, str2);
	
	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
	return 0;
}
