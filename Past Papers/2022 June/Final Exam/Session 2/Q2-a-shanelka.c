#include <stdio.h>

// start the main
int main(void) {
    // local variable declartion
    int userRating[5] = {0, 0, 0, 0, 0}, number;
    int i, j; // counter variable

    // getting inputs
    printf("Enter rating numbers for rating (1 - 5) and -99 to stop\n\n");
    do {
        scanf("%d", &number);
        switch (number) {
            case 1: {
                userRating[0]++;
                break;
            }
            case 2: {
                userRating[1]++;
                break;
            }
            case 3: {
                userRating[2]++;
                break;
            }
            case 4: {
                userRating[3]++;
                break;
            }
            case 5: {
                userRating[4]++;
                break;
            }
        }

    } while(number != -99);

    printf("\n");

    // display ratings
    for (i = 0; i < 5; i++) {
        printf("%d\t", i + 1);
        for  (j = 1; j <= userRating[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}