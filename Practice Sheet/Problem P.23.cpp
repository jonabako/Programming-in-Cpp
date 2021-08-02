//P.23
#include <iostream>
using namespace std;
int main(){
	int n, d;
	cout<<"Nominator: ";
	cin>>n;
	try{
		cout<<"Denumerator: ";
		cin>>d;
		if(d==0)
			throw(d);
		cout<<"Division = "<<(double)n/d<<endl;
	}
	catch(int exc){
		cout<<"Division by 0 not allowed!\n";
	}
	return 0;
}
