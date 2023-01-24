#include<stdio.h>
void fun(int x){
	printf("%d\n",x);
}
void main(){
	fun('A');
	fun(10);
	fun(20.4f);
	fun(30.55);
}
