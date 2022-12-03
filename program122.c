#include<stdio.h>
void main(){
	int row,col;
	printf("enter row&col\n");
	scanf("%d%d",&row,&col);

	int arr[row][col];
	int sum=0;

	printf("Enter element\n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d",&arr[i][j]);
			sum=sum+arr[i][j];
		}
	}
	printf("Array element\n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}

