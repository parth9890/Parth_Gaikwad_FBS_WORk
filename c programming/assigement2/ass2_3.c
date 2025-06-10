#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("\n enter thr no1=");
	scanf("%d",&no1);
	printf("\n enter thr no2=");
	scanf("%d",&no2);
	printf("\n enter the no3=");
	scanf("%d",&no1);
	if(no1>no2)
	{
		if(no1>no3)
		printf("no 1 is gretar %d",no1);
		else
		printf("\n no 3 is gretar %d",no3);
	}
	else
	{
		if(no2>no3)
		printf(" no 2 is gretar %d",no2);
		else
		printf("no 3 is gretar %d",no3);
		
	}
	
	
	
}