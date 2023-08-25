#include<stdio.h>
int main()
{
int row,col,i,j,a[10][10];
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of columns: ");
	scanf("%d",&col);
printf("Enter the elements into the matrix");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("%d\t",a[i][j]);
	}
}
printf("rows=");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
	if(a[i][j]!=0)
	{
	printf("%d ",a[i][j]);
	}
	}
}
}
