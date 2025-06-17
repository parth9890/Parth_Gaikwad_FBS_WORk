#include<stdio.h>
void main()
{
	int units,bill;
	printf("\n enter the the units");
	scanf("%d",&units);
	if(units>=1 && units<=50)
	{
		bill=units*30;
		printf("\n  bill %d",bill);
	}
	else if (units>=51 && units<=150)
	{
		bill=units*40;
		printf("\n  bill %d",bill);
	}
	else if(units>=151)
	{
		bill=units*50;
		printf("\n  bill %d",bill);
	}
	
	
}