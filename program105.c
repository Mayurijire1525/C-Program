#include<stdio.h>
void main(){
	int x=10;

	int*ptr1=&x;
	int*ptr2=x;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
}
