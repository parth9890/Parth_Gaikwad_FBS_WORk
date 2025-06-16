#include<stdio.h>
void main()
{
	int no,i=1,sum=0;
	printf("\n enter the number=");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
				sum=sum+i;
		}
		i++;
	}
	if(sum==no)
	printf("\n this is perfect number %d",no);
	else
	printf("\n this is not perfect number %d",no);


	
	
}