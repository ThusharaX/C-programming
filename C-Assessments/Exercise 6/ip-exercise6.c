
/*
Name: Shalinda Fernando
Date: 30/04/2022
Student ID: REDACTED
Group: REDACTED
*/

#include <stdio.h>

int main(void){
    // Init variables
    int marksArray[10], counter, mark, sum;
    float average;

    // Code block to initialze each element in the array to -1
    for (counter = 0; counter < 10; counter++){
        marksArray[counter] = -1;
    }

    // Code block to get marks from 10 students
    counter = 0;
    while (counter < 10){           // Loop 10 times
        // Prompt and get the required information from the user
        printf("Input mark %d: ", counter + 1);
        scanf("%d", &mark);

        // Marks should be within the range 0 to 100. Else print an error asking to re-enter marks.
        if(mark < 0 || mark > 100){
            puts("Invalid mark. Please re-enter.");
            continue;   // Go back to the top of the loop
        }

        marksArray[counter] = mark;     // marksArray nth element = student marks
        counter++;                      // Increment the counter by 1;
    }

    
    // Code block: Loop though the marksArray to print all the entered marks to the screen
    puts("\nInput array:");
    for (counter = 0; counter < 10; counter++){
        printf("%d ", marksArray[counter]);
        sum += marksArray[counter];
    }

    // Calculate the average. Average = total marks of 10 students / no of students
    average = sum / 10;

    // Code block: Loop though the marksArray to print all students marks >= average
    printf("\nOutput:\nPassed marks: ");
    for (counter = 0; counter < 10; counter++){
        if(marksArray[counter] >= average){                 // Condition to check if the student mark >= average
            printf("%d ", marksArray[counter]);             // Print the passed mark
        }
    }

    return 0;
}


