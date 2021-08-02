//P.1
#include <stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i='A'; i<'A'+n; i++){
		for(j='A'; j<=i; j++)
			printf("%c", j);
		printf("\n");
	}
	return 0;
}
