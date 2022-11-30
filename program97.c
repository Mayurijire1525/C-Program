#include<stdio.h>
void main(){
	int size;
	printf("enter size\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter element\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	int search;
	printf("Enter search elements\n");
	scanf("%d",&search);
	int flag=0;

	for(int i=0; i<size; i++){
		if(search==arr[i]){
			flag=1;
		}

	}
	if(flag==1){
			printf("Element found\n");
	}
		else{
			printf("Element not found\n");
		}
	}

