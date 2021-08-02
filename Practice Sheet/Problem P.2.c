//P.2
#include <stdio.h>
int main(){
	double d;
	float f;
	int i;
	scanf("%lf", &d);
	scanf("%f", &f);
	scanf("%d", &i);
	double result = d * (double)f * (double)i;
	printf("%lf\n", result);
	double *r_ptr = &result;
	*r_ptr += 5;
	printf("%lf\n", result);
	printf("%lf\n", result);
	return 0;
}
