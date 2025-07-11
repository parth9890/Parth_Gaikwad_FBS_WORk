#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    while(num > 0) {
        fact = fact * num;

        num--;
    }
    return fact;
}

int main() {
    int n, i, temp, digit, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 to %d are:\n", n);

    i = 1;
    while(i <= n) {
        temp = i;
        sum = 0;

        while(temp > 0) {
            digit = temp % 10;
            sum = sum + factorial(digit);
			temp /= 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }

        i++;
    }


}
