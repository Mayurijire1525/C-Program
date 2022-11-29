#include<stdio.h>
void main(){
	int ang,ang1,ang2,sum=0;
	printf("Enter angle\n");
	scanf("%d%d%d",&ang,&ang1,&ang2);

	sum=ang+ang1+ang2;
	if(sum==180){
		printf("you entered valid angle\n");
	}
	else{
		printf("you entered invalid angle\n");
	}
}
