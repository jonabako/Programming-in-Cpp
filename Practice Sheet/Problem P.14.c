//P.14
#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp = fopen("generate.txt", "wb");
	if(fp==NULL)
		exit(1);
	char s[] = "a aa\nb bb\nc cc\nd dd\ne ee\nf ff\ng gg\nh hh\ni ii\nj jj\n";
	fwrite(s, 1, sizeof(s), fp);
	fclose(fp);
	return 0;
}
