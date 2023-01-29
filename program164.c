#include<stdio.h>
#include<string.h>
void main(){
	char name[10]={'K','L','R','A','H','U','I','\0'};
	char *str="Virat kohli";

	int lenname=strlen(name);
	int lenstr=strlen(str);

	printf("%d\n",lenname);
	printf("%d\n",lenstr);
}
