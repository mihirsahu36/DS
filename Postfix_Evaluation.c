#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 40
int top=-1,s[MAX],i;
char ele;
void push(char ele)
{
	if(top==MAX-1)
	{
		printf("stack overflow");
	}
	else
	{
		s[++top]=ele;
		for(int i=0;i<top;i++)
			printf("\n\nThe stack elements are: %d \n",s[i]);
	
	}
}
int pop()
{
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
	return s[top--];
	}
}
int main()
{
int op1,op2,res;
char a[40];
int len;
	printf("Enter the expression to be evaluated:");
	scanf("%s",a);
	
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		
		if(a[i]!='^'&&a[i]!='*'&&a[i]!='/'&&a[i]!='+'&&a[i]!='-')
		{
		a[i]=a[i]-'0';
		push(a[i]);
		}
		else
		{
		op1=pop();
		op2=pop();
		printf("The popped elements are op2 %d op1 %d",op2,op1);
			switch(a[i])
			{
			case '+': res=op2+op1;
			break;
			case '-': res=op2-op1;
			break;
			case '*': res=op2*op1;
			break;
			case '/': res=op2/op1;
			break;
			case '^': res=pow(op1,op2);
			break;
			}
		push(res);
		}
	}
	printf("The result is %d",res);
}
