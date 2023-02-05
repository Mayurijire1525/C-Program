#include<stdio.h>
struct Movie{
	char mname[20];
	int count;
	float prize;
}obj1={"Tumbad",5,1000.00};
void main(){
	struct Movie*sptr=&obj1;

	printf("%s\n",obj1.mname);
	printf("%d\n",obj1.count);
	printf("%f\n",obj1.prize);
}
