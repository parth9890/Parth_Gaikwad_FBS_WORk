#include <stdio.h>

int main() 
{
    int num, originalNum, digit;
    int sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  
    while (num > 0) 
	{
        digit = num % 10;     
        fact = 1;
        i = 1;

        while (i <= digit) 
		{
            fact = fact * i;
            i++;
        }

        sum = sum + fact;      
        num = num / 10;        
    }

    if (sum == originalNum) 
	{
    	printf("%d is a Strong Number.\n", originalNum);
    } else 
	{
        printf("%d is Not a Strong Number.\n", originalNum);
    }

  
}
