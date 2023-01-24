#include<stdio.h>
void callbyadd(int*);
void main(){
	int x=10;
	printf("%d\n",x);
	callbyadd(&x);
	printf("%d\n",x);
}
void callbyadd(int*ptr){
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	*ptr=50;
	
	printf("%d\n",*ptr);
}
