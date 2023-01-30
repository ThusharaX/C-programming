#include <stdio.h>

// start the main
int main(void) {
    float fare1, fare2, fare3, totalFare; // variable declaration

    // get fares and assign to variables
    printf("Enter your first bus fare : ");
    scanf("%f", &fare1);
    printf("Enter your second bus fare : ");
    scanf("%f", &fare2);
    printf("Enter your third bus fare : ");
    scanf("%f", &fare3);

    // calcualte total fare
    totalFare = (fare1 + fare2 + fare3) * 2 * 5 * 14.0;

    // displaye total fare
    printf("Total expenditure = %.2f", totalFare);

    return 0;
} // end of main