#include <stdio.h>

// start main function
int main(void) {
    int identityArr[4][4];
    int i,j;
    int matrix[4][4];
  
    // allow the user to enter values for the matrix
    for (i = 0; i < 4; i++) {
        printf("Values for row %d\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("Enter element %d : ", j +1);
            scanf("%d", &identityArr[i][j]);
        }
    }
    
    // print the matrix
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", identityArr[i][j]);
        }
        printf("\n");
    }

    // create identity matrix
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matrix[i][j] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        matrix[i][i] = 1;
    }

    // check identity or not and display it
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matrix[i][j] != identityArr[i][j]) {
                printf("It is not a identity matrix.");
                return -1;
            }
        }
    }
    printf("\nIt is a identity matrix.");
  
    return 0;
} // end of main