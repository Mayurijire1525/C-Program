#include<stdio.h>
void main(){
	int num,start,end;
	printf("Enter start no\n");
	scanf("%d",&start);
	printf("Enter end no\n");
	scanf("%d",&end);

	for(int i=start; i<=end; i++){
		if(i%2==0){
			printf("%d is even\n",i);
		}

	}
	for(int j=start;j<=end; j++){
		if(j%2!=0){
			printf("%d is odd\n",j);
		}
	}
}
