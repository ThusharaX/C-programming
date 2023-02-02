#include <stdio.h>

// start the main
int main(void) {
    // local variable declaration
    int userRating[5] = {0, 0, 0, 0, 0}, rating; //rating for assign user inputs
    int i, j; // counter variables

    printf("Enter rating between 1-5\n\n");
    do {
        scanf("%d", &rating);
        switch (rating) {
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
    } while (rating != -99);

    for (i = 0; i < 5; i++) {
        printf("%d\t", i + 1);
        for (j = 0; j < userRating[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}