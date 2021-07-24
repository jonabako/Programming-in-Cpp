#include <iostream>
using namespace std;
float abs_val(float x);
int main(){
	cout<<abs_val(-2.4)<<endl;
	return 0;
}
float abs_val(float x){
	if(x<0)
		return (-1)*x;
	else
		return x;
}
