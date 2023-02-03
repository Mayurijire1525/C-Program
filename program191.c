#include<stdio.h>
#include<string.h>
struct OTT{
	char pname[20];
	int account;
	float price;
};
void main(){
	struct OTT obj1={"Netflix",3,499};
	struct OTT obj2;
	printf("Enter platform\n");
	gets(obj2.pname);

	printf("Total account\n");
	scanf("%d",&obj2.account);

	printf("sub price\n");
	scanf("%f",&obj2.price);

	printf("%s\n",obj1.pname);
	printf("%d\n",obj1.account);
	printf("%f\n",obj1.price);
}
