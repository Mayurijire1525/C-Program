#include<stdio.h>
void main(){
	int num=16;
	char ch='P';

	for(int row=1; row<=4; row++){
		for(int col=1; col<=4; col++){
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
