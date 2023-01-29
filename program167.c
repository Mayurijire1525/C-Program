#include<stdio.h>
int mystrlength(char*str){
	int count=0;

	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}
void main(){
	char name[10]={'k','l','r','a','h','u','l','\0'};
	char *str="virat kohli";

	printf("%d\n",mystrlength(name));
	printf("%d\n",mystrlength(str));
}
