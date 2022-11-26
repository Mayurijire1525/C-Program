#include<stdio.h>
void main(){
	char userdata;
	printf("Enter character\n");
	scanf("%c",&userdata);

	printf("user data=%c\n",userdata);

	if(userdata>='A'&& userdata<='Z'){
		printf("You entered UPPERCASE char\n");
	}
	if(userdata>='a'&& userdata<='z'){
		printf("You entered lowercase char\n");
	}
}
