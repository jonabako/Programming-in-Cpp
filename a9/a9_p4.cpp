#include <iostream>
#include <cstring>
using namespace std;
int mycount(int a, int b);
int mycount(char c, char s[]);
int main(){
	printf("%d\n", mycount(7, 3));
	char s[] = "this is a string";
	printf("%d\n", mycount('i', s));
	return 0;
}
int mycount(int a, int b){
	return b-a;
}
int mycount(char c, char s[]){
	int count = 0;
	int len = strlen(s);
	for(int i=0; i<len; i++){
		if(c==s[i])
			count++;
	}
	return count;
}
