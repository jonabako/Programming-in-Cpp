//P.3
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int *arr = (int*)malloc(sizeof(int)*n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	FILE *fp = fopen("squares.txt", "w");
	if(fp==NULL){
		printf("\aFile cannot be opened!\n");
		exit(1);
	}
	fclose(fp);
	
	fp = fopen("squares.txt", "a");
	for(i=n-1; i>=0; i--)
		fprintf(fp, "%d %d\n", arr[i], arr[i]*arr[i]);
	printf("\aOutput successfully written in file!\n");
	
	fclose(fp);
	free(arr);
	
	return 0;
}
