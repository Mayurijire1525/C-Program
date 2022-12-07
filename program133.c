#include<stdio.h>
void main(){
	int arr1[3]={10,20,30};
	int arr2[3]={40,50,60};

	int(*ptr1)[3]=&arr1;
	int(*ptr2)[3]=&arr2;

	printf("%d\n",**ptr1);
	printf("%d\n",**ptr2);
}
