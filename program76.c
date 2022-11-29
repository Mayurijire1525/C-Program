#include<stdio.h>
void main(){
	int num,sum=0;
	printf("Enter number\n");
	scanf("%d",&num);
	for(int num=1; num<=20; num++){
		if(num%2!=0){
			sum=num+sum;
			printf("%d\n",sum);
		}
	}
}
