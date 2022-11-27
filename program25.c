#include<stdio.h>
void main(){
	int x;
	printf("Enter value\n");
	scanf("%d",&x);
	switch(x){
		case 67:
			printf("value of x is 67\n");
			break;
		case 'A':
			printf("Value of x is A\n");
			break;
		case 68:
			printf("Value of x is 68\n");
			break;
		case 'B':
			printf("Value of x is S\n");
			break;
		default:
			printf("Wrong\n");
			break;
	}

}
