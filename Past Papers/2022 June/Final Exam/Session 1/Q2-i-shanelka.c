#include <stdio.h>

// start the main
int main(void) {
    // variable declaration
    int numArr[8], newNumArr[8], n;
    int i, j = 0; // counter variables

    // get values for numArr
    for (i = 0; i < 8; i++) {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &numArr[i]);
    }

    // display numArr values
    for (i = 0; i < 8; i++) {
        printf("%d\t", numArr[i]);
    }
    printf("\n");

    // get n
    printf("Enter value for n (n is between 1 - 8) : ");
    scanf("%d", &n);

    while ((n < 1) || (n > 8)) {
        printf("Please enter valid n value...!\n");
        scanf("%d", &n);
    }




    // move numbers
    for (i = 0; i < 8 ; i++) {
        newNumArr[(i + n) % 8] = numArr[i];
    }

    // print moved numbers
    for (i = 0; i < 8; i++) {
        printf("%d\t", newNumArr[i]);
    }

    return 0;

} // end of main