#include<stdio.h>
void main(){
	for(int row=1; row<=4; row++){
		int num=4;
		char ch='D';
		for(int col=1; col<=4; col++){
			printf("%c%d ",ch,num);
			ch--;
			num--;
		}
		printf("\n");
	}
}
