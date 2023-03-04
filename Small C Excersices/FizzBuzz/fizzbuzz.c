/*
Write a FizzBuzz implementation in C.
for multiples of three, Print “Fizz” instead of the number, and for multiples of five, Print “Buzz.” Print “FizzBuzz” for numbers that are multiples of three and five.

number/3 = 0 Fizz | number/5 = Buzz | number/3 & number/5 = FizzBuzz
*/

#include <stdio.h>

// start of the main function
int main(void){
    int inp1,inp2,num; // declaration variables

    printf("Enter Starting Number: ");
    scanf("%d", &inp1); // scan and initialization to inp1
    printf("Enter Ending Number: ");
    scanf("%d", &inp2); // scan and initialization to inp2

    // for loop for print numbers
    for (num = inp1; num <= inp2; num++) {

        if (num == 0)
            printf("Zero\n");
        else if (num % 3 == 0 && num % 5 == 0)
            printf("FizzBuzz\n");
        else if (num % 3 == 0)
            printf("Fizz\n");
        else if (num % 5  == 0)
            printf("Buzz\n");
        else
            printf("%d\n", num);
    }

    return 0;

} // End of Main
