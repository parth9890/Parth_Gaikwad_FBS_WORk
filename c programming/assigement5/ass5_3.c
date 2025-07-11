#include<stdio.h>
int main()
{
    int no;
    int i;

    printf("Enter the number: ");
    scanf("%d", &no);

    i = no;  

    while(i >= 1)
    {
        int j = 1;
        while(j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }

    
}
