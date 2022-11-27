#include<stdio.h>
void main(){
	int x;
	printf("Enter number\n");
	scanf("%d",&x);

	if(x%4==0 && x%5==0){
		printf("%d is divisible by 4 & 5\n",x);
	}
	else{
		printf("%d is not divisible by 4 & 5\n",x);
	}
}
