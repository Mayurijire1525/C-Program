#include<stdio.h>
char*mystrcopy(char*dest,const char *src){
	while(*src!='\0'){
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}
void main(){
	char*str1="Virat kohli";
	char str2[20];

	puts(str1);
	puts(str2);

	mystrcopy(str2,str1);

	puts(str1);
	puts(str2);

}
