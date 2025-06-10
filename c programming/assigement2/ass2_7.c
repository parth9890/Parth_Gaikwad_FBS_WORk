#include<stdio.h>
void main()
{
	int age;
	printf("\n enter the age");
	scanf("%d",&age);
	if(age<=12)
	{
		printf("\n child");
	}
	else if(age>=12 && age<=19)
	{
		printf("\n teenager");
	}
	else if(age>=20 && age<=59)
	{
		printf("\n adult");
	}
	else if(age>60)
	{
		printf("\n senior");
	}
	else
	{
		printf("invalid entered age");
	}
	
}