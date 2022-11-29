#include<stdio.h>
void main(){
	int row;
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int num=1;
		for(int sp=row-1; sp>=i; sp--){
			printf(" ");
		}
		for(int j=1; j<=i; j++){
			printf("%d",num);
			num++;
		}
		printf("\n");
	}
}
