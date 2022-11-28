#include<stdio.h>
void main(){
	for(int row=1; row<=4; row++){
		int num=4; 
		int num1=1;
		char ch='D';
		char ch1='A';
		for(int col=1; col<=4; col++){
			if(row%2){
				printf("%c%d ",ch,num);
				num--;
				ch--;
			}
			else{
				printf("%c%d ",ch1,num1);
				ch1++;
				num1++;
			}
		}
		printf("\n");
	}
}
