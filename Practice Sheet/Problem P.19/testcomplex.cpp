#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
	Complex a;
	Complex b;
	cin>>a;
	cin>>b;
	cout<<endl;
	cout<<"Complex number (1): "<<a<<endl;
	cout<<"Complex number (2): "<<b<<endl;
	cout<<endl;
	if((a>b)==true)
		cout<<a<<" is bigger than "<<b<<endl;
	if((a<b)==true)
		cout<<a<<" is smaller than "<<b<<endl;
	return 0;
}
