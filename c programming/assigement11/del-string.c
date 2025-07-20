void main()
{
	char s1[10];
	printf(" Enter the string ");
	scanf("%s",s1);
	char s2[10];
	printf(" Enter Char to Delet ");
	scanf("%s",s2);
	int i=0;
	while(s1[i]!='\0'&&s2[i]!='\0')
	{
	    if(s1[i]==s2[i])
		{
			s1[i]=s1[i-1];
		}
		i++;
	//s1[i]='\0';
}
	printf(" After delet %s",s1);
  // printf("%d",strlen(s1));
	
   
}