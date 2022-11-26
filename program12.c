#include<stdio.h>
void main(){
	int x=0;
	int y=5;
	int ans;

	ans=x++ || ++y;

	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);

	ans=x++&&y++;
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);
}
