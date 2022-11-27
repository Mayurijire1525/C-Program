#include<stdio.h>
void main(){
	int num=1;
	for(int row=1; row<=3; row++){
		for(int col=1; col<=3; col++){
			printf("%d ",num);
		}
		printf("\n");
		num++;
	}
}
