#include<stdio.h>
void main(){
	for(int row=1; row<=3; row++){
		int num=1;
		for(int col=1; col<=3; col++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
