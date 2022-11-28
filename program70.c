#include<stdio.h>
void main(){
	for(int row=1; row<=5; row++){
		char ch='E';
		for(int col=5; col>=row; col--){
			printf("%c ",ch);
			ch--;
		}	
		printf("\n");

	}
}
