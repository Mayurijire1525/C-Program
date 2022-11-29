#include<stdio.h>
void main(){
	int x,y,z;
	printf("enter number\n");
	scanf("%d%d%d",&x,&y,&z);

	if(x<=y&&x<=z){
		printf("%d is less",x);
	}
	else if(y<=x&&y<=z){
		printf("%d is less",y);
	}
	else if(z<=z&&z<=y){
		printf("%d is less",z);
	}
	printf("\n");
}
