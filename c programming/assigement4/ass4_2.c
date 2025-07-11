#include <stdio.h>

int main() 
{
    int no, i, j, isPrime;

    printf("Enter the value of number: ");
    scanf("%d", &no);

    printf("Prime numbers from 1 to %d are:\n", no);

    for(i = 2; i <= no; i++) 
	{
        isPrime = 1;

        for(j = 2; j < i; j++)
		 {
            if(i % j == 0) 
			{
                isPrime = 0; 
                break;
            }
        }

        if(isPrime == 1) 
		{
            printf("%d ", i);
        }
    }


}
