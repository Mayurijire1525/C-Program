#include<stdio.h>
#include<stdlib.h>
void main(){
	int*ptr=(int*)malloc(sizeof(int));
	*ptr=50;
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	free(ptr);
	printf("%d\n",*ptr);

}
