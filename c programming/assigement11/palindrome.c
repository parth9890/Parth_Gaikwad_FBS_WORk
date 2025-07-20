void main()
{ 
    int n;
	char s1[n],s2[n];
	printf("Enter the length of string :");
	scanf("%d",&n);
	
	printf("Enter");
	for(int i=0;i<n;i++)
{
	 scanf("%d",&s1[i]);
}
for(int j=0;j<n;j++)
{
	 s2[j]=s1[j];
}
int flag=0;
for(int i=0;i<n;i++)
{
	if(s1[i]==s2[i])
	{
//		printf("The string is palandrome");
     flag=1;
	}
	if(flag=1)
	{
		printf(" Palandrome");
	}
}
}