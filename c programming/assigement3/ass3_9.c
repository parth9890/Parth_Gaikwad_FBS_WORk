#include<stdio.h>
void main()
{
	int no;
	printf("\n enter the number :");
	scanf("%d",&no);
	if(no%10==no/100)
	{
		printf("\n the number is palindrome");
	}
	else
	{
		printf("\n the number is not palindrome");

	}
}