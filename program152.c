#include<stdio.h>
void add(int a,int b){
	printf("Add=%d\n",a+b);
}
void sub(int a,int b){
	printf("Sub=%d\n",a-b);
}
void main(){
	void(*ptr)(int,int);

	ptr=add;
	ptr(10,20);

	ptr=sub;
	ptr(30,10);
}
