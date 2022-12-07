#include<stdio.h>
void main(){
	int arr[5]={10,20,30,40,50};
	int*ptr1=arr;
	int*ptr2=&arr[2];
	int(*ptr3)[5]=&arr;

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
	printf("%p\n",*ptr3);
	printf("%d\n",**ptr3);
}
