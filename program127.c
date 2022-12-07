#include<stdio.h>
void main(){
	char arr1[3]={'A','B','C'};
	char arr2[3]={'D','E','F'};
	char arr3[3]={'G','H','I'};

	char*carr[3]={arr1,arr2,arr3};

	printf("%ld\n",sizeof(carr));

	carr[0]=arr1+1;
	carr[1]=arr2+2;
	carr[3]=arr3;

	printf("%c\n",*(carr[0]));
	printf("%c\n",*(carr[1]));
	printf("%c\n",*(carr[2]));
}
