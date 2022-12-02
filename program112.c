#include<stdio.h>
void main(){
	int arr[]={10,20,30,40,50};

	int*ptr=&(arr[0]);
	ptr++;
	printf("%d\n",*ptr);
	++ptr;
	printf("%d\n",*ptr);
}
