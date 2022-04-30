
/*
Name: Shalinda Fernando
Date: 30/04/2022
Student ID: REDACTED
Group: REDACTED
*/

#include <stdio.h>

int main(){
    // Variable Init
    int userRating, rateArrayIndex, counter;

    // Array declare
    int rate[5] = {0, 0, 0, 0, 0};

    // Loop 5 times to get the user input
    for (counter = 1; counter <= 5; counter++){
        
        // Prompt and get the required information from the user
        printf("Please enter your rating: ");
        scanf("%d", &userRating);

        // Error Check: if user entered a rating less than 0 or greater than 5. Show them an error.
        if(userRating < 0 || userRating > 5){
            printf("\nPlease enter your rating between 0 to 5.\n");     // Print Error
            continue;       // Go back to the top of the loop
        }

        rateArrayIndex = userRating - 1;        // Get the element index to change from the rate array
        rate[rateArrayIndex] += 1;              // Increment the index by 1

    }
    
    // Print Array to the screen
    printf("\n%s %30s", "Rating", "Number of responses\n");

    // Code block to loop through the array
    for (counter = 0; counter < 5; ++counter){
        printf("%d", counter + 1);                  // Rate number. Ex: 1,2,3,4,5
        printf("%17d", rate[counter]);              // Add padding of 17 spaces. Then goes the array element
        printf("\n");                               // Print new line to go to the next row
    }
    
    return 0;
}


