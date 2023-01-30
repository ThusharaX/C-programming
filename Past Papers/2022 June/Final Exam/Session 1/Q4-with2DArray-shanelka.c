#include<stdio.h>

// start the main
int main() {
    // declare the file pointer
    FILE *wptr;

    // variable declaration
    char idNum[9];
    int answer[5][4];
    int i, j; // counter variables

    // open file
    wptr = fopen("answers.dat", "w");

    // check file openning status
    if (wptr == NULL) {
        printf("File openning error....!");
        return -1;
    }

    // get inputs with nested loop
    for (i = 0; i < 5; i++) {
        printf("Enter Student %d ID Number : ", i + 1);
        scanf(" %s", idNum);
        fprintf(wptr, "%s\t\t", idNum);

        // get answers with loop
        for (j = 0; j < 4; ) {
            printf("Enter Question %d answer : ", j + 1);
            scanf("%d", &answer[i][j]);

            // check the answer is between as 1 to 5
            if ((answer[i][j] <= 5) && (answer[i][j] >= 1)) {
                fprintf(wptr, "%d\t", answer[i][j]);
                j++;
            }
            else {
                printf("Wrong answer, Please enter correct answer : ");
            }
            printf("\n");
        }
        fprintf(wptr, "\n");

    }
    
    // close file
    fclose(wptr);

    return 0;
}