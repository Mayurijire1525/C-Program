#include<stdio.h>
void main(){
	char ch='A';
	for(int row=1; row<=4; row++){
		for(int col=4; col>=row; col--){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
