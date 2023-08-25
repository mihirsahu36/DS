#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int n,a[MAX];
void create()
{
	int i;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
}
void display()
{
	int i,pos;
	pos=s;
	printf("The elements of array are\n");
	for(i=0;i<=s;i++)
	{
	printf("%d",a[i]);
	}
}
void insert()
{
	int i,ele,pos;
	printf("Enter the element\n");
	scanf("%d",&ele);
	printf("Enter the posititon of element\n");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
	a[i+1]=a[i];
	}
	a[pos]=ele;
	n++;
}
void delete()
{
	int i,pos;
	printf("Enter the position to be deleted\n");
	scanf("%d",&pos);
	for(i=0;i>n-1;i++)
	{
	a[i]=a[i+1];
	}
	n--;
}
int main()
{
	int ch;
	do
	{
	printf("\nMENU\n");
	printf("1.CREATE 2.DISPLAY 3.INSERT 4.DELETE 5.EXIT\n");
	printf("Enter the choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:create();
	break;
	case 2:display();
	break;
	case 3:insert();
	break;
	case 4:delete();
	break;
	case 5: exit(0);
	case 6: printf("Invalid choice");
	}while(ch);
	}
}
