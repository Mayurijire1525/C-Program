#include<stdio.h>
void main(){
	for(int row=1; row<=4; row++){
		int num=3;
		char ch='c';
		for(int col=1; col<=3; col++){
			if(row%2){
				printf("%d ",num);
				num--;
				
			}
			else{
				printf("%c ",ch);
				ch--;
			
			}
		}
		printf("\n");
	}
}
