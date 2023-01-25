#include<stdio.h>
void add(int x,int y){
	printf("%d\n",x+y);
}
void fun(int x,int y,void(*ptr)(int,int)){
	ptr(x,y);
}
void main(){
	fun(10,20,add);
}
