#include<stdio.h>
void main(){
	char ch='D';
	for(int i=1; i<=4; i++){
		for(int sp=1; sp<i; sp++){
			printf(" ");
		}
		for(int j=4; j>=i; j--){
			printf("%c",ch);
			
		}
		ch++;
		printf("\n");
	}
}
