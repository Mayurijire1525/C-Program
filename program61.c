#include<stdio.h>
void main(){
	int num=1;
	int row;
	scanf("%d",&row);
	

	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			printf("%d ",num*row);
			num++;
		}
		printf("\n");
	}
}
