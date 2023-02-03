#include<stdio.h>
struct cricplayer{
	char pname[20];
	int jerno;
	float avg;
}obj2={"Dhoni",7,45.55};
void main(){
	struct cricplayer obj1={"Virat kohli",18,50.83};
	
	printf("%s\n",obj1.pname);
	printf("%d\n",obj1.jerno);
	printf("%f\n",obj1.avg);

	printf("%s\n",obj2.pname);
	printf("%d\n",obj2.jerno);
	printf("%f\n",obj2.avg);
}
