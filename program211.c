#include<stdio.h>
#include<stdlib.h>
typedef struct Movie{
	char mName[20];
	float imdb;
	struct Movie*next;
}Mov;
Mov*head=NULL;
void addNode(){
	Mov*newNode=(Mov*)malloc(sizeof(Mov));
	printf("Enter movie name\n");
	fgets(newNode->mName,15,stdin);
	getchar();
	printf("Enter ratring\n");
	scanf("%f",&newNode->imdb);
	getchar();
	newNode->next=NULL;
}
void printLL(){
	Mov*temp=head;
	while(temp!=NULL){
		printf("Moviename=%s\n",temp->mName);
		printf("imdbrating=%f\n",temp->imdb);
		temp=temp->next;
	}
}
void main(){
	addNode();
	printLL();
}
