#include<stdio.h>
void main(){
	int num=9;
	for(int row=1; row<4; row++){
		for(int col=1; col<4; col++){
			printf("%d ",num);
			num--;
		}
		printf("\n");
	}
}
