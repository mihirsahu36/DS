#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int top=-1,s[MAX],i,ele;
void push(int ele)
{
if(top==MAX-1)
{
	printf("stack overflow");
}
else
{
	printf("enter the elements: ");
	scanf("%d",&ele);
	s[top+1]=ele;
	top++;
}
}
void pop()
{
if(top==-1)
{
	printf("stack underflow");
}
else
{
	ele=s[top];
	printf("Decremented %d",ele);
	top--;
}
}
void display()
{
if(top==-1)
{
	printf("stack is empty");
}
else
{
	for(i=0;i<=top;i++)
	{
		printf("%d",s[i]);
	}
}
}
void seek()
{
if(top==-1)
{
	printf("stack is empty");
}
else
{
	printf("%d",s[top]);
}
}
int main()
{
int ch;
while(1)
{
	printf("\nMENU\n");
	printf("1.PUSH 2.POP 3.DISPLAY 4.SEEK 5.EXIT\n");
	printf("Enter the choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: push(ele);
		break;
	case 2: pop();
		break;
	case 3: display();
		break;
	case 4: seek();
		break;
	case 5: exit(0);
	case 6: printf("Entered choice is invalid");
	}
}
}
