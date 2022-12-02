#include<stdio.h>
int a=10;
char ch='A';
void main(){
	float x=25.5;
	double d=30.550;

	int*ptr1=&a;
	char*ptr2=&ch;
	float*ptr3=&x;
	double*ptr4=&d;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	printf("%p\n",ptr3);
	printf("%p\n",ptr4);
	
	printf("%d\n",*ptr1);
	printf("%c\n",*ptr2);
	printf("%f\n",*ptr3);
	printf("%lf\n",*ptr4);

}
