//P.7
#include <stdio.h>
int substitute_vowels(char *s, char ch);
int main(){
	char s[] = "This is a sentence";
	printf("%s\n", s);
	int n = substitute_vowels(s, 'o');
	printf("%s\n", s);
	printf("%d\n", n);
	return 0;
}
int substitute_vowels(char *s, char ch){
	int count, i = 0;
	char *ptr = &s[0];
	while(*(ptr+i)!='\0'){
		if(*(ptr+i)=='a' || *(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='i' || *(ptr+i)=='u'){
			*(ptr+i)=ch;
			count++;
		}
		i++;
	}
	return count;
}
