#include <iostream>
using namespace std;
int myfirst(int arr[], int n);
double myfirst(double arr[], int n);
char myfirst(char arr[], int n);
int main(){
	int a[] = {11, 5, 8, 6, 5, 44};
	double b[] = {34.5, 6.0, 3.5, -22.0};
	char c[] = {'a', 'e', 'r', 't', 'w', 'i', 'q'};
	cout<<myfirst(a, 6)<<endl;
	cout<<myfirst(b, 4)<<endl;
	cout<<myfirst(c, 7)<<endl;
	return 0;
}
int myfirst(int arr[], int n){
	int result;
	for(int i = 0; i<n; i++){
		if(arr[i]>0 && arr[i]%2==0){
			result = arr[i];
			break;
		}	
		else
			result = -1;
	}
	return result;
}
double myfirst(double arr[], int n){
	double result;
	for(int i = 0; i<n; i++){
		if(arr[i]<0 && arr[i]==(((int)arr[i])*1.0)){
			result = arr[i];
			break;
		}	
		else
			result = -1.1;
	}
	return result;
}
char myfirst(char arr[], int n){
	char result;
	for(int i = 0; i<n; i++){
		if((arr[i]>=65 && arr[i]<=90) || (arr[i]>=97 && arr[i]<=122)){
			if(arr[i]!='A' && arr[i]!='E' && arr[i]!='I' && arr[i]!='O' && arr[i]!='U'
			&& arr[i]!='a' && arr[i]!='e' && arr[i]!='i' && arr[i]!='o' && arr[i]!='u'){
				result = arr[i];
				break;
			}	
			else
				result = '0';
		}	
		else
			result = '0';
	}
	return result;
}
