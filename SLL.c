#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *start=NULL;

struct node *create(struct node *start){
	int ele;

	struct node *new_node, *ptr;
	printf("Enter the element");
	scanf("%d",&ele);
	
	while(ele!=0){
		printf("The element value is %d", ele);
		new_node=(struct node*)malloc(sizeof (struct node));
		new_node->data=ele;
		if(start==NULL){
			new_node->next=NULL;
			start=new_node;
		}
		else{
			ptr=start;
			while(ptr->next!=NULL)
				ptr=ptr->next;
			ptr->next=new_node;
			new_node->next=NULL;
			
		}
	printf("Enter the next element");
	scanf("%d",&ele);
	printf("The element value is %d", ele);
}

return start;
}

struct node *display(struct node *start){
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
			}
}

struct node *search(struct node *start){
	struct node *ptr, *pos;
	ptr=start;
	int val;
	printf("Enter the value to be searched: ");
	scanf("%d",&val);
	while(ptr!=NULL){
		if(val==ptr->data){
			printf("Element founf");
			break;
		}
		else{
			ptr=ptr->next;
		}
		if(ptr==NULL)
		{
			printf("Element not found");
		}
		}return start;
}

int main(){
	int choice;
	printf("\t\tMENU\t\t");
	printf("\n1.CREATE 2.DISPLAY 3.SEARCH 4.EXIT\n");
	printf("Enter the Choice: ");
	scanf("%d",&choice);
	while(1){
		switch(choice){
			case 1: start=create(start);
			break;
			case 2: start=display(start);
			break;
			case 3: start=search(start);
			break;
			case 4: exit(0);
			break;
			default: printf("Invalid choice");
			}
	}
}
