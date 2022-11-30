#include<stdio.h>
void main(){
	int n,a,sum=0;
	printf("Enter number\n");
	scanf("%d",&n);

	while(n>0){
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	printf("sum=%d\n",sum);
}
