#include<stdio.h>
void main()
{
	int marks;
	printf("\n enter the student marks");
	scanf("%d",&marks);
	if(marks>=75)
	{
		printf("\n distinction");
	}
	else if(marks>=65)
	{
		printf("\n first class");
	}
	else if(marks>=55)
	{
		printf("\n second class");
	}
	else if(marks>=40)
	{
		printf("\n pass class");
	}
	else
	{
		printf("\n fail");
	}
}