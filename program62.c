#include<stdio.h>
void main(){
	int num=10;
	char ch='J';

	for(int row=1; row<=4; row++){
		for(int col=1; col<=row; col++){
			if(row%2){
				printf("%d ",num);
				num--;
				ch--;
			}
			else{
				printf("%c ",ch);
				ch--;
				num--;
			}
		}
		printf("\n");
	}
}
