#include<stdio.h>
struct movie{
	char mname[20];
	int noofticket;
	float price;
}obj1={"Kantara",2,300};
void fun(){
	struct movie obj3={"Tiger",7,12.50};

	printf("%s\n",obj3.mname);
	printf("%d\n",obj3.noofticket);
	printf("%f\n",obj3.price);
}
void main(){
	struct movie obj2={"Driysham",2,400};
	fun();

	printf("%s\n",obj1.mname);
	printf("%d\n",obj1.noofticket);
	printf("%f\n",obj1.price);
	
	printf("%s\n",obj2.mname);
	printf("%d\n",obj2.noofticket);
	printf("%f\n",obj2.price);
}
