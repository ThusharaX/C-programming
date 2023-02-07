#include <stdio.h>

int main(void) {
    int i, j;
    // printf first 7 lines
    for (i = 0; i <= 7; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // print 8 to 11 lines
    for (i = 7; i > 0; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}