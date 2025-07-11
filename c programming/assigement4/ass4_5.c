#include <stdio.h>

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");
}

void checkPrime(int num) {
    int i, count = 0;
    if (num <= 1) {
        printf("Not a Prime number.\n");
        return;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            count++;
            break;
        }
    }
    if (count == 0)
        printf("Prime number.\n");
    else
        printf("Not a Prime number.\n");
}

void checkPalindrome(int num) {
    int original = num, reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if (original == reversed)
        printf("Palindrome number.\n");
    else
        printf("Not a Palindrome number.\n");
}

void checkSign(int num) {
    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");
}

void reverseNumber(int num) {
    int reversed = 0, digit;
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    printf("Reversed Number: %d\n", reversed);
}

void sumOfDigits(int num) {
    int sum = 0, digit;
    if (num < 0) num = -num; 
    while (num != 0) {
        digit = num % 10;
      sum = sum + digit;
        num = num / 10;

    }
    printf("Sum of digits: %d\n", sum);
}

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: checkEvenOdd(num); break;
        case 2: checkPrime(num); break;
        case 3: checkPalindrome(num); break;
        case 4: checkSign(num); break;
        case 5: reverseNumber(num); break;
        case 6: sumOfDigits(num); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
