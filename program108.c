#include<stdio.h>
void main(){
	char x='A';
	char y='B';

	char*ptr1=&x;
	char*ptr2=&y;

	printf("%d\n",*ptr1+*ptr2);
}
