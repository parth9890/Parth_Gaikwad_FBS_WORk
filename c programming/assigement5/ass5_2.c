void main()
{
	int no,i=1;
	printf(" enter the number");
	scanf("%d",&no);
	while(i<=no)
	{
		int j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}