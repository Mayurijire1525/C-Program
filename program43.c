#include<stdio.h>
void main(){
	for(int row=1; row<=4; row++){
		int num=1;
		char ch='A';
		for(int col=4; col>=row; col--){
			if(col%2==0){
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
