/*
Write a C program to input an integer from the keyboard and convert the number into a positive
number, if the user input is a negative value.

Hint : if x is negative ,  -x is positive;

Eg: if user enters 5, display 5
       if user enters -2, display 2
*/
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter Number: ");
    scanf("%d", &num); // get input for num

    if (num < 0) {
        num = -num;
    }

    printf("%d\n", num);

    return 0;

} //end of main function
