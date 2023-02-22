#include<stdio.h>
#include<stdlib.h>
struct Demo{
	int Data;
	struct Demo*next;
};
struct Demo*head=NULL;
struct Demo*createNode(){
	struct Demo*newNode=(struct Demo*)malloc(sizeof(struct Demo));
	printf("Enter dat\n");
	scanf("%d",&newNode->Data);
	newNode->next=NULL;
	return newNode;
}
void addNode(){
	struct Demo*newNode=createNode();
	if(head==NULL){
		head=newNode;
	}else{
		struct Demo*temp=head;
		while(temp->next!=NULL){
			temp->next=newNode;
		}
	}
}
void addFirst(){
	struct Demo*newNode=createNode();
	if(head==NULL){
		head=newNode;
	}else{
		newNode->next=head;
		head=newNode;
	}
}
int countNode(){
	struct Demo*temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("%d",count);
	return count;
}
void addatpos(int pos){
	struct Demo*newNode=createNode();
	struct Demo*temp=head;
	while(pos-2){
		temp=temp->next;
		pos--;
	}
	newNode->next=temp->next;
	temp->next=newNode;
}
void printLL(){
	struct Demo*temp=head;
	while(temp!=NULL){
		printf("|%d|",temp->Data);
		temp=temp->next;
	}
}
void deleteFirst(){
	struct Demo*temp=head;
	head=temp->next;
	free(temp);
}
void deleteLast(){
	struct Demo*temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
}
void main(){
	char choice;
	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addatpos\n");
		printf("4.printLL\n");
		printf("5.deleteFirst\n");
		printf("6.deleteLaat\n");
		printf("7.count\n");
		int ch;

		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
			        break;
			case 3:
				{
					int pos;
					printf("enter number\n");
					scanf("%d",&pos);
					addatpos(pos);
				}
				break;
			case 4:
				printLL();
				break;
			case 5:
				deleteFirst();
				break;
			case 6:
				deleteLast();
				break;
			case 7:
				countNode();	
				break;

			default:
				printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);
	}
	while(choice=='Y'||choice=='y');

}
