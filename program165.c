#include<stdio.h>
#include<string.h>
void main(){
	char*str1="Hardik pandya";
	char str2[20];

	puts(str1);
	puts(str2);

	strcpy(str2,str1);

	puts(str1);
	puts(str2);
}
