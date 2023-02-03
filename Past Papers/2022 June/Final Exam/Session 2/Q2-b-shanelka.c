#include <stdio.h>

// start the main
int main(void) {
    // local variable declaration
    int image[4][4], imageSet[4][4]; // image set is second matrix
    int i, j; // counter variable

    // getting inputs and setting to 1 and 0
    for (i = 0; i < 4; i++) {
        printf("Values for row %d\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("\tEnter element %d : ", j + 1);
            scanf("%d", &image[i][j]);
            if (image[i][j] >= 55) { // image[i][j] = 55 is not clearly mentioned in the questin.
                imageSet[i][j] = 1;
            }
            else if (image[i][j] < 55) {
                imageSet[i][j] = 0;
            }
        }
    }
    printf("\n\n");

    // print image
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", image[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // print imageSet
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", imageSet[i][j]);
        }
        printf("\n");
    }

    return 0;
}