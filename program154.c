#include<stdio.h>
void add(int x,int y){
	printf("Add=%d\n",x+y);
}
void sub(int x,int y){
	printf("Sub=%d\n",x-y);
}
void mul(int x,int y){
	printf("Mul=%d\n",x*y);
}
void div(int x,int y){
	printf("Div=%d\n",x/y);
}
void main(){
	void(*ptr[4])(int,int)={add,sub,mul,div};
	for(int i=0; i<4; i++){
		ptr[i](30,20);
	}
}


