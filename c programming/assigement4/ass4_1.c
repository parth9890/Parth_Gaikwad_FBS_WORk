#include<stdio.h>
void main()
{
	int no,sum=0,rem=1,temp=0,count;
	printf("\n enter the number");
	scanf("%d",&no);
	no=count;
	for(int i=1;i<=count;i++)
	{
		sum=count%10;
		rem=sum*sum*sum;
		temp=rem+temp;	
	}
	if(temp==count)
	{
		printf("armstrong");
	}
	
	else
	{
		printf("not armstrong");
	}
	
}