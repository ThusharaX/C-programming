#include <stdio.h>

int main() {
    int x = 10;

    printf("\n\nDo While Loop x = 10\n");
    do {
        printf("%d\t", x);
        x--;
    } while (x > 1);

    x = 10;
    printf("\n\nWhile Loop x = 10\n");
    while (x > 1) {
        printf("%d\t", x);
        x--;
    }

    x = 1;
    printf("\n\nDo While Loop x = 1\n");
    do {
        printf("%d\t", x);
        x--;
    } while (x > 1);

    x = 1;
    printf("\n\nWhile Loop x = 1\n");
    while (x > 1) {
        printf("%d\t", x);
        x--;
    } // check this point carefully. do vs while 
    
    return 0;
}