#include <stdio.h>

int main(void)
{
    int j, l;

    // printf("Enter Number: ");
    // scanf("%d", &i);

    // i = 7;

    // for Print First 7 Lines
    for (j = 1; j <= 7; j++) { // line break
        for (l = 1; l <= j; l++) { // add astericks mark
            printf("* ");
        }
        printf("\n"); // go to new line
    }

    //  for Print next 4 lines.
    for (j = 7; j >= 0; j -= 2) { // line break * note 01
        for (l = 1; l <= j; l++) { // add astericks mark
            printf("* ");
        }
        printf("\n");// go to new line
    }

    return 0;
}

// Note 01 via Beej's guide to c programming
/*
It’s split into three parts, separated by semicolons. The first is the initialization, the second is the loop
condition, and the third is what should happen at the end of the block if the loop condition is true. All
three of these parts are optional.

for (initialize things; loop if this is true; do this after each loop)
Note that the loop will not execute even a single time if the loop condition starts off false.

** for-loop fun fact!

* You can use the comma operator to do multiple things in each clause of the for loop!

for (i = 0, j = 999; i < 10; i++, j--) {
printf("%d, %d\n", i, j);
}

* An empty for will run forever:

for(;;) { // "forever"
    printf("I will print this again and again and again\n" );
    printf("for all eternity until the heat-death of the universe.\n");

*/
