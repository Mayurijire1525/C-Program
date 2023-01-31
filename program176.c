#include<stdio.h>
char*mystrlwr(char*str){
	while(*str!='\0'){
		if(*str>=65&&*str<=90){
			*str=*str+32;
		}
		str++;
	}
	return str;
}
void main(){
	char str[10]={'s','H','a','s','H','I','\0'};
	puts(str);
	mystrlwr(str);
	puts(str);
}
