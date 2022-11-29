#include<stdio.h>
void main(){
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	for(int i=10; i>=1; i--){
		printf("%d*%d=%d\n",num,i,num*i);
	}
	printf("\n");
}
