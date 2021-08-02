//P.9
#include <stdio.h>
int main(){
	int n, i, j;
	char ch;
	scanf("%d", &n);
	getchar();
	scanf("%c", &ch);
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}
