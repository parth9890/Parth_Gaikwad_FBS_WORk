#include<stdio.h>
void main()
{
	int price;
	char student,y,n;
	printf("\nchoice the ther is student or not student=");
	scanf("%ch",&student);
	printf("\n enter the price=");
	scanf("%d",&price);
	if(student=='y')
	{
		if(price>=500)
		{
			printf(" the discount is 20%");
		}
		else
		{
			printf("10%");
		}
	}
	else if(student=='n')
	{
		if(price>=600)
		{
			printf("15%");
		}
		else
		{
			printf("\n not-discount");
		}
	}
	
			
	
	
}