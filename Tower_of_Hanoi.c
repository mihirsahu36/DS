#include<stdio.h>
#include<math.h>
void tower(int n,char src,char dest,char temp)
{
if(n==0)
	return;
tower(n-1,src,dest,temp);
printf("Move disc %d from %c to %c\n",n,src,dest);
tower(n-1,temp,src,dest);
}
void main()
{
int n;
	printf("Enter the number of disc: ");
	scanf("%d",&n);
	tower(n,'A','B','c');
	int moves=(int)(pow(2,n)-1);
	printf("\nTotal number of moves: %d",moves);
}
