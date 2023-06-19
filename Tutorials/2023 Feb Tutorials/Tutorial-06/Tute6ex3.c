/*
Write three functions do the following
    add -  add two integers pass as parameters and return the result
    multiply - multiply two integers pass as parameters and return the result
    square – receive an integer as a parameter and return the result after multiplying the
number by itself.
Use these functions in the main program to calculate the result of the following mathematical
expression.
(3*4 + 5*7)^2
*/

#include <stdio.h>

int addNumber(int num, int num1); // function prototype
int multNumber(int num, int num1);
int powerNumber(int num);

// begin main function
int main(void)
{
    printf("Result: %d\n", powerNumber(addNumber(multNumber(3, 4),multNumber(5, 7))));

    return 0;
} // end of main function

int addNumber(int num, int num1) // function definition
{
    return num + num1;
}

int multNumber(int num, int num1) // function definition
{
    return num * num1;
}

int powerNumber(int num) // function definition
{
    return num * num;
}
