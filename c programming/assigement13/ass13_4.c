struct hr storehr();
void displayhr(struct hr h1);
 struct hr
{
	char id[50];
	char name[40];
	long long int salary;
	long long int commission;
	
};

int main()
{
	
	struct hr h1,h2,h3;
	printf("enter the hr details of 1");
	h1 = storehr();
	
	printf("enter the hr details of 2");
	h2 = storehr();
	
	printf("enter the hr details of 3");
	h3 = storehr();
	
	printf("hr 1 details:-");
	displayhr(h1);
	
	printf("hr 2 details:-");
	displayhr(h2);
	
	printf("hr 3 details:-");
	displayhr(h3);
	
	 
	 
}
struct hr storehr()
{
	struct hr h1;
	printf("Enter ID: ");
	scanf("%s",&h1.id);
	
	printf("Enter Name: ");
	scanf("%s",&h1.name);
	
	printf("Enter Salary: ");
	scanf("%lld",&h1.salary);
	
	printf("Enter Commission: ");
	scanf("%lld",&h1.commission);
	
	return h1;
}
void displayhr(struct hr h1)
{
	printf("id=%s name=%s salary=%lld commission=%lld \n",h1.id,h1.name,h1.salary,h1.commission);
}

