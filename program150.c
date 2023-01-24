#include<stdio.h>
int sumarray(int*ptr,int sizearray){
	int sum=0;
	for(int i=0; i<sizearray; i++){
		sum=sum+*(ptr+i);
	}
	return sum;
}
void main(){
	int arr[]={10,20,30,40,50};
	int sizearray=sizeof(arr)/sizeof(int);
	int sum=sumarray(arr,sizearray);
	printf("sum of arr%d\n",sum);
}
