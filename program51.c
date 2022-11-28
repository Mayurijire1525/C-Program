#include<stdio.h>
void main(){
	char ch='D';
	for(int row=1; row<=4; row++){
		for(int col=1; col<=4; col++){
			printf("%c ",ch);
		}
		printf("\n");
		ch--;
	}
}
