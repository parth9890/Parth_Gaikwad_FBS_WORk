void main()
{
	char str[100];
	//printf("%s",str);
	printf("Enter the String :");
	scanf("%s",str);
	
	int i=0;
	while(str[i]!='\0')
	{  
		if(i%2!=0)
		{
			printf("\n  %c",str[i]);
		}
		i++;
	}
}