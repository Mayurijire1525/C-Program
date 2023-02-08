#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct OTT{
	char pname[10];
	int usercount;
	float price;
};
void main(){
	struct OTT*ptr1=(struct OTT*)malloc(sizeof(struct OTT));

	strcpy(ptr1->pname,"Primevideo");
	ptr1->usercount=1000000;
	ptr1->price=350.50;

	printf("%s\n",ptr1->pname);
	printf("%d\n",ptr1->usercount);
	printf("%f\n",ptr1->price);
}
