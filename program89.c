#include<stdio.h>
void main(){
	int n,r=0;
	printf("Enter number\n");
	scanf("%d",&n);

	while(n!=0){
		r=r*10;
		r=r+n%10;
		n=n/10;
	}
	printf("%d\n",r);
}
