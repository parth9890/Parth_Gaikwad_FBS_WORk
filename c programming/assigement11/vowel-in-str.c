void main()
{

char ch[100];
printf("Enter the String :");
scanf("%s",ch);
int i;
for(i=0;ch[i]!='\0';i++)
{
	char c=ch[i];
	int count=0;
	      	if(c=='A' || c=='a' ||c=='e'||c=='E'||c=='i' ||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
	      	
	      		//printf(" The vowels in String are %c",c);
	      		count++;
	      		printf("@");
				 // printf("%d \n",count);
			  }
			  ch[i]='\0';
}
printf("%s",ch);
}
	