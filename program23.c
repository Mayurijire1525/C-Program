#include<stdio.h>
void main(){
	int pmoney;
	printf("enter pmoney\n");
	scanf("%d",&pmoney);

	if(pmoney>=25000){
		printf("Happy\n");
	}
	else if(pmoney>=2000){
		printf("c02\n");
	}
	else if(pmoney>=1000){
		printf("sarowar\n");
	}
	else if(pmoney>=500){
		printf("vaishali\n");
	}
	else{
		printf("Nothing\n");
	}
	
}
