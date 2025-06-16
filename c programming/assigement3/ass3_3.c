#include <stdio.h>

int main() {
    int start, end, sum = 0;
    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) 
	{
        sum=sum+i;
    }

    printf("Sum from %d to %d is: %d\n", start, end, sum);

    
}
