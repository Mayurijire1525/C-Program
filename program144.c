#include<stdio.h>
void fun(int,int);
void main(){
	int x,y;
	printf("Enter element\n");
	scanf("%d%d",&x,&y);
	fun(x,y);
}
void fun(int x,int y){
	printf("%d\n",x+y);
}
