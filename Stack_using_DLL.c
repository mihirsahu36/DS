#include<stdio.h>
#include<stdlib.h>
struct node{
	int ID;
	char Name[10],Branch[4],spec[10];
	struct node *prev,*next;
	};
struct node *top=NULL;

void push(){
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter the ID number: ");
	scanf("%d",&new_node->ID);
	printf("Enter the Name: ");
	scanf("%s",&new_node->Name);
	printf("Enter the Branch: ");
	scanf("%s",&new_node->Branch);
	printf("Enter the specialization: ");
	scanf("%s",&new_node->spec);
	if(top==NULL){
		new_node->next=NULL;
		top=new_node;
		new_node->prev=NULL;
		}
	else{
		new_node->next=top;
		top->prev=new_node;
		new_node->prev=NULL;
		top=new_node;
		}
	}

void pop(){
	struct node *ptr;
	ptr = top;
	if(top==NULL){
		printf("stack is empty");
	}
	else if(ptr->next == NULL && ptr->prev==NULL){
		top=top->next;
		free(ptr);
	}
	else{
		ptr=top;
		top=top->next;
		top->prev=NULL;
		ptr->next=NULL;
		free(ptr);
		}
	}

void display(){
	if(top==NULL){
		printf("stack empty");
		}
	else{
		struct node *temp;
		temp=top;
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
		printf("\t\tMENU\t\t\n 1.PUSH 2.POP 3.DISPLAY 4.EXIT");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default: printf("Invalid choice");
			}
		}
	}
	
