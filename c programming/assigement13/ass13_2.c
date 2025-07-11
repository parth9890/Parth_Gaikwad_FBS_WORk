struct Employee
{
	int id;
	char name[20];
	long long int salary;
};
void main()
{
	struct Employee e1,e2;
	printf("\n enter the employee id");
	scanf("%d",&e1.id);
	printf("\n enter the employee name ");
	scanf("%s",&e1.name);
	printf("\n enter the employee salary ");
	scanf("%lld",&e1.salary);
	e2.id=150;
	strcpy(e2.name,"raju");
	e2.salary=50050;
		printf(" employee 1:- id=%d name=%s salary=%lld",e1.id,e1.name,e1.salary);
	printf("\n employee 2:- id=%d name=%s salary=%lld",e2.id,e2.name,e2.salary);

	
}