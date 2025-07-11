#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);  // Example: 5

    i = n;
    while(i >= 1) {
        j = 1;
        while(j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}
