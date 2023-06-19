// Exercise 3: Practice scanf statement in a C program

#include <stdio.h>

int main(void)
{
    int mark1,mark2,total; // declaration

    printf("Enter Your Marks: ");
    scanf("%d", &mark1); // get mark one input

    printf("Enter Your Marks: ");
    scanf("%d", &mark2); // get mark two input

    total = mark1+mark2; // calculate total marks

    printf("Total Marks = %d\n", total); // display total marks

    // calculate and display Average marks (convert int to float using type conversion.)

    printf("Average Marks = %.1f\n", (float)total / 2); // with type conversion

    // printf("Average Marks = %d\n", total / 2); // without tyoe conversion

    return 0;
} // end function main
