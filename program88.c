#include<stdio.h>
void main(){
	int n,rem,prod=1;
	printf("Enter number\n");
	scanf("%d",&n);

	while(n!=0){
		rem=n%10;
		prod=prod*rem;
		n=n/10;

	}
	printf("prod =%d\n",prod);
}
