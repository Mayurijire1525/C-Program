#include<stdio.h>
void main(){
	char ch='A';
	for(int row=1; row<4; row++){
		for(int col=1; col<4; col++){
			if(col%2){
				printf("%c ",ch);
				ch++;
			}
			else{
				printf("%c ",ch+32);
				ch++;
			}
		}
		printf("\n");
	}
}
