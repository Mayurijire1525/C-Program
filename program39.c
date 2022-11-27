#include<stdio.h>
void main(){
	for(int row=1; row<=4; row++){
		char ch='A';
		for(int col=1; col<=row; col++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
