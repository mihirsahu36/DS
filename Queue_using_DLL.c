#include<stdio.h>
#include<stdlib.h>
struct node{
	int ID;
	char Name[10],Branch[4],spec[10];
	struct node *prev,*next;
	};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(){
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter the ID number: ");
	scanf("%d",&new_node->ID);
	printf("Enter the Name: ");
	scanf("%s",new_node->Name);
	printf("Enter the Branch: ");
	scanf("%s",new_node->Branch);
	printf("Enter the specialization: ");
	scanf("%s",new_node->spec);
	if(front==NULL){
		front=new_node;
		rear=new_node;
		front->next=NULL;
		front->prev=NULL;
		}
	else{
		rear->next=new_node;
		new_node->next=NULL;
		new_node->prev=rear;
		rear=new_node;
		}
	}

void dequeue(){
	struct node *ptr;
	if(front==NULL){
		printf("queue is empty");
	}
	else if(front->next == NULL && front->prev==NULL){
		front=NULL;
	}
	else{
		struct node *ptr;
		ptr=front;
		front=front->next;
		front->prev=NULL;
		free(ptr);
		}
	}

void display(){
	if(front==NULL){
		printf("stack empty");
		}
	else{
		struct node *temp;
		temp=front;
		while(temp!=NULL){
			printf("%d\t",temp->ID);
			printf("%s\t",temp->Name);
			printf("%s\t",temp->Branch);
			printf("%s\t\n",temp->spec);
			temp=temp->next;
			}
	}
}

int main(){
	int ch;
	while(1){
		printf("\t\tMENU\t\t\n 1.ENQUEUE 2.DEQUEUE 3.DISPLAY 4.EXIT");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default: printf("Invalid choice");
			}
		}
	}
