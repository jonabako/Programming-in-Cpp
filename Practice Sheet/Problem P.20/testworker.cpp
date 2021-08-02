#include <iostream>
#include <string>
#include "Worker.h"

using namespace std;

int main() {
	worker a(234, "John McEnroe");
	worker b(324, "Jack Nicholson");
	cout << a << b;
	return 0;
}

