#include<stdio.h>
void main(){
	int sum=0; 
	float avg;

	for(int i=1; i<=10; i++){
		printf("%d\n",i);
		sum=sum+i;

		printf("%d sum is\n",sum);
	}
	avg=sum/10;
	printf("%f avg is\n",avg);
}
