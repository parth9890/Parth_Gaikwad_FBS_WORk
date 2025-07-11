struct salesManager storesalesManager();
struct salesManager
{
	char id[50];
	char name[50];
	long long int salary;
	long long int incentive;
	int target;
};
void main()
{
	struct salesManager m1,m2,m3;
	printf("enter the 1 salesManaer details ");
	m1=storesalesManager();
	
	
}
struct salesManager storesalesManager()
{
	struct salesManager m1;
	scanf("%s",&m1.id);
	scanf("%s",&m1.name);
	scanf("%lld",&m1.salary);
	scanf("%lld",&m1.incentive);
	scanf("%d",&m1.target);
}