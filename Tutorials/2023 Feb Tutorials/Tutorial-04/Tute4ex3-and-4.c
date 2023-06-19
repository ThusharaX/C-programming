#include <stdio.h>

int main(void)
{
    char opera; // delacration of variable
    float num1, num2;

    printf("Enter your operator(+ - / *): ");
    opera = getchar(); // for get operator
    printf("\nEnter number one: ");
    scanf("%f", &num1); // for get num1
    printf("\nEnter Number two: ");
    scanf("%f", &num2); // for get num2

    // switch statement
    switch(opera)
    {
        case '+':
            printf("Result: %.2f\n",(num1 + num2));
            break;
        case '-':
            printf("Result: %.2f\n",(num1 - num2));
            break;
        case '*':
            printf("Result: %.2f\n",(num1 * num2));
            break;
        case '/':
            printf("Result: %.2f\n",(num1 / num2));
            break;
        default:
            printf("invalid operator..!"); // show error massage
    }

    return 0;
} // end of main function
