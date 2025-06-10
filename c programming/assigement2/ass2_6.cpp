#include<stdio.h>
int main()
{
	int no;
	printf("\n enter the number");
	scanf("%d",&no);
	if (no%3==0 && no%5==0)
	{
		printf("\n divisible are both");
	}
	else if (no%3==0)
	{
		printf("\n divisible by 3 but not by 5");
	}
	else if (no%5==0)
	{
		printf("\n divisible by 5 but not by 3 ");
	}
	else
	{
		printf("\n divisible by non");
	}
	

	
}