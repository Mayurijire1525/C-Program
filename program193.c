#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL{
	char sname[20];
	int teams;
	double price;
};
void main(){
	struct IPL*ptr=(struct IPL*)malloc(sizeof(struct IPL));
	strcpy((*ptr).sname,"Tata");
	ptr->teams=8;
	(*ptr).price=10.00;

	printf("%s\n",(*ptr).sname);
	printf("%d\n",(*ptr).teams);
	printf("%lf\n",(*ptr).price);
}
