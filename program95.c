#include<stdio.h>
void main(){
	int arr[5];

	printf("Enter element\n");

	for(int i=0; i<5; i++){
		scanf("%d\n",&arr[i]);
	}
	printf("Array elemts are\n");

	for(int i=0; i<=5; i++){
		if(arr[i]%2==0){
			printf("%d\n",arr[i]);
		}
	}
}
