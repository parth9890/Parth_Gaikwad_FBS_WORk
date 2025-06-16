void main()
{
	int no,rem,sum=0;
	printf("\n enter the number=");
	scanf("%d",&no);
	int temp=no;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
//	printf("\n the count of %d is %d",temp,count);
	no=temp;
	while(no>0)
	{
		rem=no%10;
		int res=1,i=1;
		while(i<=count)
		{
			res=res*rem;
			i++;
		}
		sum=sum+res;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("\n no is armstrong");
	}
	else
	{
		printf("\n no is not armstrong");
	}
}
