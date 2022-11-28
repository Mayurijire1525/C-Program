#include<stdio.h>
void main(){
	for(int row=1; row<=4; row++){
		for(int col=1; col<=4; col++){
			if(col%2){
				printf("$ ");
			}
			else{
				printf("= ");
			}
		}
		printf("\n");
	}
}
