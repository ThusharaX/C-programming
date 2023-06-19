/*
Exercise 2: Practice arithmetic operators in C
Write a program that inputs one five-digit number, separates the number into its individual
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter your (Five-Digit) Number: ");
    scanf("%d", &num); // input

    // check number digits
    if (num > 9999 && num <= 99999) {
        printf("%d ", (num / 10000) % 10); //get the first Number
        printf("%d ", (num / 1000) % 10); // get the second number
        printf("%d ", (num / 100) % 10); // get the third number
        printf("%d ", (num / 10) % 10); // get the fourth number
        printf("%d \n", num % 10); // get the fifth number
    }
    else
        printf("Five digit numbers only\n");

    return 0;

}
