#include<stdio.h>
void main(){
	char ch='a';
	for(int row=1; row<4; row++){
		for(int col=1; col<4; col++){
			if(ch%2==0){
				printf("%c ",ch-32);
				ch++;
			}
			else{
				printf("%c ",ch);
				ch++;
				
			}
		}
		printf("\n");
	}
}
