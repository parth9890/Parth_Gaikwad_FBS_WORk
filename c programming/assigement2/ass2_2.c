#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf(" enter the tringale side 1=");
	scanf("%d",&s1);
	printf(" enter the tringale side 2=");
	
	scanf("%d",&s2);
	printf(" enter the tringale side 3=");
	scanf("%d",&s3);
	if(s1==s2 && s2==s3)
	{
		printf("\n this tringale is equilateral");
	}
	else if(s1==s3 || s2==s3 || s1==s2)
	{
		printf("\n this trinagle is isosceles");
	}
	else 
	{
		printf("\n this trinagle is scalene");
	}
	
	
}