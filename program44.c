#include<stdio.h>
void main(){
	int row;
	printf("Enter row\n");
	scanf("%d",&row);
	
	for(int i=1; i<=row; i++){
		for(int col=1; col<=i; col++){
			printf("*");
			
		}
		printf("\n");
	}
}
