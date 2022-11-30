#include<stdio.h>
void main(){
	int arr1[3];
	printf("%ld\n",sizeof(arr1));
	
	int arr2[1];
	printf("%ld\n",sizeof(arr2));
	
	int arr3[0];
	printf("%ld\n",sizeof(arr3));
}
