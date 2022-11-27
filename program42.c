#include<stdio.h>
void main(){
	int num=1;
	for(int row=1; row<=3; row++){
		for(int col=3; col>=row; col--){
			printf("%d ",num);
			num=num+2;
		}
		printf("\n");
	}
}
