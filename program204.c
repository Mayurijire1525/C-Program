#include<stdio.h>
void main(){
	char carr[5]={'A','B','C','D','E'};

	char*cptr=carr;
	int*iptr=carr;

	printf("%c\n",*cptr);
	printf("%c\n",*cptr);

	cptr++;
	iptr++;

	printf("%c\n",*cptr);
	printf("%c\n",*iptr);
}
