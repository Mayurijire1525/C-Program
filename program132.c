#include<stdio.h>
void main(){
	char carr1[3]={'A','B','C'};
	char carr2[3]={'D','E','F'};

	char*ptr1=&carr1[1];
	char*ptr2=carr2;
	char(*ptr3)[3]=&carr1;

	printf("%c\n",**ptr3);
	ptr3++;
	printf("%c\n",**ptr3);
	printf("%c\n",*ptr1);
	ptr1++;
	printf("%c\n",*ptr1);

}
