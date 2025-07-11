#include <stdio.h>

struct charPattern 
{
    char symbol;
    int rows;
};

int main() 
{
    struct charPattern pattern;
    pattern.symbol = '*';
    pattern.rows = 4;

    int i, j, space;

    for(i = 1; i <= pattern.rows; i++)
	 {
        for(space = 1; space <= pattern.rows - i; space++) 
		{
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) 
		{
            printf("%c", pattern.symbol);
        }
        printf("\n");
    }

    
    for(i = pattern.rows - 1; i >= 1; i--) 
	{
        for(space = 1; space <= pattern.rows - i; space++) 
		{
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) 
		{
            printf("%c", pattern.symbol);
        }
        printf("\n");
    }

    
}
