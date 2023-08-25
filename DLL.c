#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
	};

struct node *start=NULL;

struct node *create(struct node *start){
	int ele;
	struct node *new_node, *ptr;
	
	printf("Enter the element: ");
	scanf("%d",&ele);
	
	while(ele!=0){
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=ele;
		if(start==NULL){
			new_node->next=NULL;
			new_node->prev=NULL;
			start=new_node;
			//printf("The start element is %d",start->data);
			}
		else{
			ptr=start;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
				new_node->prev=ptr;				
				ptr->next=new_node;
				new_node->next=NULL;
				//printf("The inserted element is %d",ptr->data);			
		}

	printf("Enter the next elemnet: ");
	scanf("%d",&ele);
	}
return start;
}
struct node *insert(struct node *start){
	int val,ele;
	struct node *temp, *ptr, *new_node;
	ptr=start;
	printf("Enter the value: ");
	scanf("%d",&val);
	printf("Enter the element to be inserted: ");
	scanf("%d",&ele);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=ele;
	while(ptr->data!=val){
		ptr=ptr->next;
		}
		temp=ptr->next;
		new_node->prev=ptr;
		new_node->next=temp;
		ptr->next=new_node;
		return start;
	}

struct node *delete(struct node *start){
	int val;
	struct node *ptr;
	printf("Enter the value: ");
	scanf("%d",&val);
	ptr=start;
	while(ptr->data!=val){
		ptr=ptr->next;
		}
		ptr->next->prev=ptr->prev;
		ptr->prev->next=ptr->next;
		ptr->next=NULL;
		ptr->prev=NULL;
		free(ptr);
	return start;
	}
struct node *count(struct node *start){
	struct node *ptr;
	int count=0;
	ptr=start;
	while(ptr!=NULL){
		count++;
		ptr=ptr->next;
	}
	printf("The number of nodes are: %d",count);
	return start;
	}

struct node *display(struct node *start){
	struct node *ptr;
	ptr = start;
	while(ptr!=NULL){
	printf("%d\t",ptr->data);
	ptr=ptr->next;
	}
return start;
}
int main(){
	int ch;
	while(1){
	printf("\t\tMENU\t\t\n1.CREATE 2.INSERT 3.DELETE 4.DISPLAY 5.COUNT 6.EXIT\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:start=create(start);
		break;
		case 2:start=insert(start);
		break;
		case 3:start=delete(start);
		break;
		case 4:start=display(start);
		break;
		case 5:start=count(start);
		break;
		case 6:exit(0);
		break;
		default: printf("Invalid choice");
		}
	}
}
