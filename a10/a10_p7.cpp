#include <iostream>
#include <cstring>

using namespace std;

class NaiveString {
	private:
		char *str;
	public:
		NaiveString(const char*);
		NaiveString(const NaiveString&);
		~NaiveString();
		void update(char, char);
		void print();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
	cout << "first constructor being called" << endl;
}

NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	cout<< "copy constructor being called" << endl;
}

NaiveString::~NaiveString(){
	cout << "NaiveString being destroyed" << endl;
}

void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

void funcByRef(NaiveString &s) {
	cout << "funcbyref() being called" << endl;
	s.update('D', 'c');
	s.print();
}

int main(int argc, char** argv) {
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	
	NaiveString b("cDddDdC");
	b.print();
	NaiveString c(b);
	c.print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(c);
	
	return 0;
}
