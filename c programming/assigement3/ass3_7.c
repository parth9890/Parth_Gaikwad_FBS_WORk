#include<stdio.h>
void main()
{
	int no,i=1,f=1;
	printf("\n enter the number=");
	scanf("%d",&no);
	while(i<=no)
	{
		f=f*i;
		i++;
	}
	printf("\n Factorial of %d = %lld\n", no, f);
}