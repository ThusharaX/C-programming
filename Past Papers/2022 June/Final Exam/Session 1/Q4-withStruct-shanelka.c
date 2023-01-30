#include<stdio.h>

// start the main
int main() {
    // declare the file pointer
    FILE *wptr;

    // variable declaration with structure
    struct student {
        char idNum[8];
        int answer[4];
    }student[5];

    // counter variablesdeclaration
    int i, j;

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
        scanf("%s", student[i].idNum);
        fprintf(wptr, "%s\t\t", student[i].idNum);

        // get answers with loop
        for (j = 0; j < 4; ) {
            printf("Enter Question %d answer : ", j + 1);
            scanf("%d", &student[i].answer[j]);

            // check the answer is between as 1 to 5
            if ((student[i].answer[j] <= 5) && (student[i].answer[j] >= 1)) {
                fprintf(wptr, "%d\t", student[i].answer[j]);
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