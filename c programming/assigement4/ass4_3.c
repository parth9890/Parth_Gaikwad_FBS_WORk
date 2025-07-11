#include <stdio.h>

int main() 
{
    int n, num = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(num <= n)
	 {
        int i = 1, sum = 0;

        while(i < num) 
		{
            if(num % i == 0)
			{
                sum += i;
            }
            i++;
        }

        if(sum == num) 
		{
            printf("%d ", num);
        }
        

        num++;
    }

    return 0;
}
