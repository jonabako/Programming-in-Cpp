//P.4
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
bool check(char *pass);
int main(){
	char password[100];
	while(1){
	fgets(password, sizeof(password), stdin);
	password[strlen(password)-1]='\0';
	if((check(password)==false)){
		printf("Length of password: %d\n", strlen(password));
		printf("\aYour password is invalid!Re-type.\n");
	}
	else{
		printf("You entered a valid password :)\n");
		break;	
	}
	}
	return 0;
}
bool check(char pass[100]){
	int i;
	int count=0;
	for(i=0; i<strlen(pass); i++){
		if((pass[i]=='0' || pass[i]=='1' || pass[i]=='2' || pass[i]=='3' || pass[i]=='4' 
		|| pass[i]=='5' || pass[i]=='6' || pass[i]=='7' || pass[i]=='8' || pass[i]=='9'))
			count++;
	}
	if(strlen(pass)>=8 && count>=3)
		return true;
	else
		return false;
}
