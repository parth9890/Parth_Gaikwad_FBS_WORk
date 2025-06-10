
#include<stdio.h>
void main()
{
	int no1,no2,res;
	char op;
	printf("\n enter the no1=");
	scanf("%d",&no1);
	printf("\n enter the no2=");
	scanf("%d",&no2);
	printf("\n choice the operators +,-,*,/,% =");
	fflush(stdin);
	scanf("%c",&op);
	if(op=='+')
	{
		res=no1+no2;
	}
	else if(op=='-')
	{
		res=no1-no2;	
	}
	else if (op=='*')
	{
		res=no1*no2;
	}
	else if (op=='/')
	{
		res=no1/no2;
	}
	else
	{
		res=no1%no2;
		
	}
	printf("\n the res is %d",res);

	
}