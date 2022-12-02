#include<stdio.h>
void main(){
	int arr1[3]={10,20,30};
	int arr2[3]={10,20,30};

	if(arr1[0]==arr2[0] && arr1[1]==arr2[1]&&arr1[2]==arr2[2]){
		printf("Equal\n");
	}
	else{
		printf("Not equal\n");
	}
}
