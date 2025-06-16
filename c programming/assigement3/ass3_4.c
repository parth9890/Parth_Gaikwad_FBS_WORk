#include<stdio.h>
void main()
{
	int no, i, isPrime = 1;

	printf("Enter a number: ");
	scanf("%d",&no);

	if (no <= 1) 
	{
    	isPrime = 0; // numbers <= 1 are not prime
	} 
	else
	 {
    	for (i = 2; i <= no / 2; i++) 
		{
    		
        	if (no % i == 0) 
			{
            isPrime = 0; // found a divisor
            break;
       		}
    	}
}

	if (isPrime)
	{
	
    	printf("%d is a prime number.", no);
    }
	else
	{
	
   		printf("%d is not a prime number.", no);
   	}
}
