int* create(int );
int main()
{
	
//int arr[5];
int size;
printf("Enter the size of array");
scanf("%d",&size);
int* x=create(size);
printf("Enter  elements :-");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
//demo(x);
//prime(arr,5);
}
int* create(int size)
{
	int* mac=create(size*sizeof(int));
	return mac;
	
}


void prime(int* arr,int size)
{

	for(int i=0;i<size;i++)
	{ int flag=0;
	if(arr[i]>1)
	{
	
		int n=arr[i];
		for(int j=2;j<n;j++)
		{
			if(n%j==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf(" \n %d",n);
		}
	}
}

}