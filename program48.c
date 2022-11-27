#include<stdio.h>
void main(){
	int num=1;
	char ch='a';

	for(int row=1; row<=4; row++){
		for(int col=1; col<=4; col++){
			if(row%2==0){
				printf("%c ",ch);
				ch++;
			}
			else{
				printf("%d ",num);
				num++;
			}
		}
		printf("\n");
	}
}
