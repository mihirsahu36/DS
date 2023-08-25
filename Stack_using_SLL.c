#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	};
struct node *top;
void push(int ele){
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof (struct node));
	printf("Enter the element: ");
	scanf("%d",&ele);
	new_node->data=ele;
	if(top==NULL){
		new_node->data=ele;
		new_node->next=NULL;
		top=new_node;
	}
	else{
		new_node->next=top;
		top=new_node;
	}
}
void pop(){
	if(top==NULL){
		printf("Underflow");
	}
	else{
		struct node *ptr;
		ptr=top;
		top=top->next;
		printf("The element deleted is %d",ptr->data);
		free(ptr);
	}
}
void display(){
	if(top==NULL){
		printf("Stack empty");
	}
	else{
		struct node *temp;
		temp=top;
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
			}
		}
	}
int main(){
	int ch,ele;
	while(1){
		printf("\t\tMENU\t\t\n1.PUSH 2.POP 3.DISPLAY 4.EXIT"); 
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: push(ele);
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
