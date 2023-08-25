#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	};
struct node *front,*rear,*temp;
void enqueue(struct node *new_node){
	int ele;
	printf("Enter the element: ");
	scanf("%d",&ele);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=ele;
	if(front==NULL){
		new_node->next=NULL;
		front=new_node;
		rear=new_node;
		front->next=NULL;
		rear->next=NULL;
		}
	else{
		rear->next=new_node;
		rear=new_node;
		rear->next=NULL;
		}
	}
void dequeue(){
	if(front==NULL){
		printf("Queue underflow");
		return;
		}
	else{
		temp=front;
		front=front->next;
		printf("The element deleted is %d",temp->data);
		free(temp);
		}
	}
void display(){+6
	if(front==NULL){
		printf("queue empty");
		}
	else{
		temp=front;
		while(temp!=NULL){
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
	}
int main(){
	int ch,ele;
	while(1){
		printf("\t\tMENU\t\t\n1.ENQUEUE 2.DEQUEUE 3.DISPLAY 4.EXIT"); 
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: enqueue(front);
				break;
			case 2: dequeue(front);
				break;
			case 3: display(front);
				break;
			case 4: exit(0);
				break;
			default: printf("Invalid choice");
			}
		}
	}
