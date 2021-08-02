//P.8
#include <stdio.h>
void total_time(int mins[], int secs[], int n, int *sum_min, int *sum_sec);
int main(){
	int mins[5] = {12, 3, 5, 6, 7};
	int secs[5] = {32, 45, 23, 11, 2};
	int *sum_min, *sum_sec;
	total_time(mins, secs, 5, sum_min, sum_sec);
	return 0;
}
void total_time(int mins[], int secs[], int n, int *sum_min, int *sum_sec){
	int i;
	int sum = 0;
	for(i=0; i<n; i++){
		sum += 60*mins[i] + secs[i];
	}
	int min = sum/60;
	int sec = sum%60;
	sum_min = &min;
	sum_sec = &sec;
	printf("Total time = %d minutes %d seconds\n", *sum_min, *sum_sec);
}
