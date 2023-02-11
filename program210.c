#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Employee{
	int Id;
	char empname[20];
	float sal;
	struct Employee*next;
}Emp;
void main(){
	Emp*emp1=(Emp*)malloc(sizeof(Emp));
	Emp*emp2=(Emp*)malloc(sizeof(Emp));
	Emp*emp3=(Emp*)malloc(sizeof(Emp));
	emp1->Id=1;
	strcpy(emp1->empname,"kanha");
	emp1->sal=600;
	emp1->next=emp2;
	
	emp2->Id=2;
	strcpy(emp2->empname,"kavya");
	emp2->sal=700;
	emp2->next=emp3;

	emp3->Id=3;
	strcpy(emp3->empname,"kia");
	emp3->sal=800;
	emp3->next=NULL;

	printf("%d\n",emp1->Id);
	printf("%s\n",emp1->empname);
	printf("%f\n",emp1->sal);
	printf("%p\n",emp1->next);
	
	printf("%d\n",emp2->Id);
	printf("%s\n",emp2->empname);
	printf("%f\n",emp2->sal);
	printf("%p\n",emp2->next);
	
	printf("%d\n",emp3->Id);
	printf("%s\n",emp3->empname);
	printf("%f\n",emp3->sal);
	printf("%p\n",emp3->next);
}
