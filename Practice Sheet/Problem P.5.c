//P.5
#include <stdio.h>
#include <stdbool.h>
bool odd(unsigned char data);
int main(){
	char c;
	while(1){
		scanf(" %c", &c);
		if(c=='\n')
			break;
		if(odd(c)==true)
			printf("%c is even\n", c);
		else
			printf("%c is odd\n", c);
	}
	return 0;
}
bool odd(unsigned char data){
	if((data^1)>data)
		return true;
	else
		return false;
}

// alternative method:
/*
#include <stdio.h>
#include <stdbool.h>
bool odd(unsigned char data);
int main(){
	unsigned char c;
	while(1){
		scanf(" %c", &c);
		if(c=='\n')
			break;
		if(odd(c)==true)
			printf("%c is odd\n", c);
		else
			printf("%c is even\n", c);
	}
	return 0;
}
bool odd(unsigned char data){
	if(data&1==1)
		return true;
	else
		return false;
}
*/
