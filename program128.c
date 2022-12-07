#include<stdio.h>
void main(){
	int arr1[3]={10,20,30};
	int arr2[3]={40,50,60};

	int(*iptr)[3]={&arr1,&arr2};

	printf("%p\n",iptr[0]);
	printf("%p\n",iptr[1]);
}
