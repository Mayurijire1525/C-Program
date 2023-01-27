#include<stdio.h>
void fun(int x,int y,int*ptradd,int*ptrsub){
	*ptradd=x+y;
	*ptrsub=x-y;
}
void main(){
	int x=30;
	int y=20;

	int add;
	int sub;

	fun(30,20,&add,&sub);
	printf("%d\n",add);
	printf("%d\n",sub);

}
