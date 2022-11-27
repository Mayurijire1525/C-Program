#include<stdio.h>
void main(){
	for(int row=1; row<=4; row++){
		int num=1;
		for(int col=1; col<=row; col++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
