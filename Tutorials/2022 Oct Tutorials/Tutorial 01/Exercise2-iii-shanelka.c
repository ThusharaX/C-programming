#include <stdio.h>

// start the main function
int main(void) {

    int mark1, mark2; // for two subjects marks
    float avg; // average

    // get first subject mark
    printf("Enter subject 1 mark : ");
    scanf("%d", &mark1);
    // get second subject mark
    printf("Enter subject 2 mark : ");
    scanf("%d", &mark2);

    // calculate average of marks
    avg = (mark1 + mark2) / 2.0;

    // display average
    printf("Your average = %.2f", avg);

    return 0;

} // end of main