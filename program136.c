#include<stdio.h>
void fun(int);
void main(){
	printf("Start main\n");
	fun(10);
	printf("End main\n");
}
void fun(int x){
	printf("%d\n",x);
}
