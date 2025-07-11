struct Admin
{
	int id;
	char name[40];
	long long int salary;
	long long int allowance;
};
void main()
{
	struct Admin a1,a2;
	printf("enter the admin id:");
	scanf("%d",&a1.id);
	printf("enter the admin name:");
	scanf("%s",&a1.name);
	printf("enter the admin salary:");
	scanf("%lld",&a1.salary);
	printf("enter the admin allowance");
	scanf("%d",&a1.allowance);
	
	a2.id=456;
	strcpy(a2.name,"rohan");
	a2.salary=60000;
	a2.allowance=9000;
	printf("id=%d name=%s, salary=%lld allowance=%lld",a1.id,a1.name,a1.salary,a1.allowance);
	printf("\n id=%d name=%s, salary=%lld allowance=%lld",a2.id,a2.name,a2.salary,a2.allowance);

}