#include <iostream>
void subtract_max(int *arr, int n);
void deallocate(int *arr, int n);
using namespace std;
int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<"Original array:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
	subtract_max(a, n);
	cout<<"Modified array:\n";
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
	deallocate(a, n);
	return 0;
}
void subtract_max(int *arr, int n){
	int max=arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]>max)
			max=arr[i];
	}
	for(int i=0; i<n; i++)
		arr[i]-=max;
}
void deallocate(int *arr, int n){
	delete arr;
}
