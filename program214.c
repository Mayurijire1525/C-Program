#include<stdio.h>
void*malloc(size_t);
void free(void*);
typedef struct Node{
	struct Node*prev;
	int data;
	struct Node*next;
}Node;
Node*head=NULL;
Node*createNode(){
	Node*newNode=(Node*)malloc(sizeof(Node));
	newNode->prev=NULL;
	printf("Enter data\n");
	scanf("%d",&newNode->data);
	newNode->next=NULL;
	return newNode;
}
void addNode(){
	Node*newNode=createNode();
	if(head==NULL){
		head=newNode;
	}else{
		Node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
	}
}
void addFirst(){
	Node*newNode=createNode();
	if(head==NULL){
		head=newNode;
	}else{
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
}
int countNode(){
	Node*temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
int addatpos(int pos){
	int count=countNode();
	if(pos<=0||pos>=count+2){
		printf("Invalid node pos\n");
		return -1;
	}else{
		if(pos==count+1){
			addNode();
		}
		else if(pos==1){
			addFirst();
		}
		else{
			Node*newNode=createNode();
			Node*temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			newNode->next=temp->next;
			newNode->prev=temp;
			temp->next->prev=newNode;
			temp->next=newNode;
		}
		return 0;
	}
}
void delFirst(){
	int count=countNode();
	if(head==NULL){
		printf("Nothing to delete\n");
		return -1;
	}else if(count==1){
		free(head);
		head=NULL;
	}else{
		head=head->next;
		free(head->prev);
		head->prev=NULL;
	}
}
int delLast(){
	int count=countNode();
	if(head==NULL){
		printf("Linked list is empty\n");
		return -1;
	}else{
		if(count==1){
			free(head);
			head=NULL;
		}else{
			Node*temp=head;
			while(temp->next->next!=NULL){
				temp=temp->next;
			}
			free(temp->next);
			temp->next=NULL;
		}
		return 0;
	}
}
int printDLL(){
	if(head==NULL){
		printf("Empty\n");
		return -1;
	}else{
		Node*temp=head;
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}
int delatpos(int pos){
	int count=countNode();
	if(pos<=0||pos>count){
		printf("wrong input\n");
		return -1;
	}else{
		if(pos==1)
			delFirst();
		else if(pos==count)
			delLast();
		else{
			struct Node*temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			temp->next=temp->next->next;
			free(temp->next->prev);
			temp->next->prev=temp;
		}
		return 0;
	}
}
void main(){
	int countNode;
	printf("Enter node count\n");
	scanf("%d",&countNode);
	for(int i=1; i<=countNode; i++){
		addNode();
	}
	printDLL();
	addFirst();
	printf("After add first node\n");
	printDLL();

	int pos;
	printf("Enter node position\n");
	scanf("%d",&pos);
	addatpos(pos);
	printf("After add at position\n");
	printDLL();
	delatpos(pos);
	printf("After detatpos\n");
	printDLL();
	delFirst();
	printf("after delfirst\n");
	printDLL();
	delLast();
	printf("After dellast\n");
	printDLL();

}
