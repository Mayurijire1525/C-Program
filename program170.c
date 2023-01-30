#include<stdio.h>
#include<string.h>

void main(){
	char*str1="Shashi";
	char*str2="shahsi";

	int diff=strcmp(str1,str2);
	printf("%d\n",diff);

	if(diff==0){
		printf(" string is equal\n");
	}
	else{
		printf("String not equal\n");
	}
}
