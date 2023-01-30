#include <stdio.h>

// start the main
int main(void) {
    // variable declaration
    char char1, char2; // two characters
    int lines; // number of lines
    int i, j; // counter variables

    // get two characters
    printf("Please enter first character : ");
    scanf(" %c", &char1);
    printf("Please enter second character : ");
    scanf(" %c", &char2);

    // get line count
    printf("Please enter line count : ");
    scanf(" %d", &lines);

    // print with loop
    for (i = 0; i < lines; i++) {
        for (j = 1; j <= i + 1; j++) {
            if (j % 2 == 1) {
                printf("%c", char1);
            }
            else {
                printf("%c", char2);
            }
        }
        printf("\n");
    }

    return 0;
}