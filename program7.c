#include<stdio.h>
void main(){
	int x=5;
	int ans;

	printf("%d\n",x);
	ans=++x + ++x;

	printf("%d\n",x);
	printf("%d\n",ans);
}
