#include <stdio.h>

// start the main
int main(void) {
    // local variable declaration
    int number, digit[4];
    int i, j; // counter variable

    // get correct number
    do {
        printf("Please enter your 4 digit number : ");
        scanf("%d", &number);
        if ((number <= 999) || (number >= 10000)) {
            printf("Invalid Number\n");
        }
    } while ((number <= 999) || (number >= 10000));

    // separate to digits
    digit[0] = number % 10000 / 1000;
    digit[1] = number % 1000 / 100;
    digit[2] = number % 100 / 10;
    digit[3] = number % 10 / 1;

    // check palindrome or not
    if ((digit[0] == digit[3]) && (digit[1] == digit[2])) {
        printf("It is a Palindrome");
    }
    else {
        printf("It is not a Palindrome");
    }

    return 0;
}