#include<stdio.h>
void main()
{
	int no;
	printf("\n enter the no=");
	scanf("%d",&no);
	if(no%10==no/100)
	{
		printf("\n the number is pallindrome");
	}
	else
	{
		printf("\n the number is not pallindrome");
	}
}