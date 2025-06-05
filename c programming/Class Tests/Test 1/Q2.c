#include<stdio.h>
void main()
{
	int year;
	printf("\n enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("\n year is leap year");
	}
	else
	{
		printf("\n year is not leap year");
	}
}