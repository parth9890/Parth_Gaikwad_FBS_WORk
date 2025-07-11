struct Student
{
	int rollno;
	char name[20];
	int marks;
	
};
void main()
{
	struct Student s1,s2;
	
	
	printf("enter the rollno ");
	scanf("%d",&s1.rollno);
	printf("enter the name");
	scanf("%s",&s1.name);
	printf("enter the marks");
	scanf("%d",&s1.marks);
	
	s2.rollno=102;
	strcpy(s2.name,"kunal");
	s2.marks=98;
	
	
	printf("\n rollno=%d name=%s marks=%d ",s1.rollno,s1.name,s1.marks);
	printf("\n rollno=%d name=%s marks=%d ",s2.rollno,s2.name,s2.marks);
	
	
	
}