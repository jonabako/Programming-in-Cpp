#include <iostream>
#include "Box.h"

using namespace std;

int main(){
	int n, i;
	double h, w, d;
	cin>>n;
	Box *arr = new Box[2*n];
	for(i=0; i<n; i++){
		cout<<"Enter data for Box "<<i+1<<":\n";
		cout<<"Height: ";
		cin>>h;
		cout<<"Width: ";
		cin>>w;
		cout<<"Depth: ";
		cin>>d;
		arr[i] = Box(h, w, d);
	}
	
	for(i=n; i<2*n; i++){
		arr[i] = Box(arr[i-n]);
	}
	
	for(i=0; i<2*n; i++){
		cout<<"Volume of Box "<<i+1<<" = "<<arr[i].Volume()<<endl;
	}

	return 0;
}
