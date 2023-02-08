#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct company{
	char Cname[20];
	int Empcount;
	float revenue;
};
void main(){
	struct company*cptr=(struct company*)malloc(sizeof(struct company));

	strcpy(cptr->Cname,"Veritas");
	cptr->Empcount=700;
	cptr->revenue=150.00;

	printf("company name=%s\n",cptr->Cname);
	printf("Employee count=%d\n",cptr->Empcount);
	printf("revenue=%f\n",cptr->revenue);
}
