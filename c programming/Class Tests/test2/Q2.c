#include<stdio.h>
void main()
{
	int no;
	printf("\n enter the number=");
	scanf("%d",&no);
	if(no>0)
	{
		printf("positive number");
	}
	else if(no<0)
	{
		printf("\n negative number");
	}
	else
	{
		printf("\n neutral no");
	}
}