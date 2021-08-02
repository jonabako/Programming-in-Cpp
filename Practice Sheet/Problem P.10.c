//P.10
#include <stdio.h>
#include <stdlib.h>
void print_matrix(int **A, int rows, int cols);
int main(){
	FILE *fp = NULL;
	fp = fopen("matrix.dat", "r");
	if(fp==NULL){
		printf("\aFile could not be found!\n");
		exit(1);
	}
	int arr[8];
	
  	int i, value = 0;
	fscanf (fp, "%d", &value);    
  	while (!feof (fp)){  
      arr[i] = value;
      fscanf (fp, "%d", &value);
      i++;
    }
    
    int rows = arr[0];
    int cols = arr[1];
	int pos_ai = arr[2];
	int pos_aj = arr[3];
	int a = arr[4];
	int pos_bi = arr[5];
	int pos_bj = arr[6];
	int b = arr[7];
	
	int **matrix = (int**)malloc(sizeof(int*)*rows);
	if(matrix==NULL)
		exit(1);
	for(i=1; i<=rows; i++){
		matrix[i] = (int*)malloc(sizeof(int)*cols);
		if(matrix[i]==NULL)
			exit(2);
	}
	
	int j;
	for(i=1; i<=rows; i++){
		for(j=1; j<=cols; j++){
			matrix[i][j] = 0;
		}
	}
	
	matrix[pos_ai][pos_aj] = a;
	matrix[pos_bi][pos_bj] = b;
	
	print_matrix(matrix, rows, cols);
	
	fclose(fp);
	return 0;
}
void print_matrix(int **A, int rows, int cols){
	int i, j;
	for(i=1; i<=rows; i++){
		for(j=1; j<=cols; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}
