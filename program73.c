#include<stdio.h>
void main(){
	for(int i=1; i<=4; i++){
		int num=1;
		char ch='b';
		for(int j=4; j>=i; j--){
			if(j%2){
				printf("%c",ch);
				ch=ch+2;
			}
			else{
				printf("%d",num);
				num++;
			}
		}
		printf("\n");
	}
}
