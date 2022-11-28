#include<stdio.h>
void main(){
	for(int row=1; row<=4; row++){
		int num=1;
		char ch='a';
		for(int col=1; col<4; col++){
			if(row%2){
				printf("%d ",num);
				num++;
			}
			else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
