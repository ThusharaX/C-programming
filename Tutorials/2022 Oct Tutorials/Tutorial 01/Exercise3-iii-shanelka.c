#include <stdio.h>

// start the main function
int main(void) {
    float basicSalary, bonus; // variable declaration

    // get and assign basic salary
    printf("Enter Basic Salary : ");
    scanf("%f", &basicSalary);

    // calculate bonus
    bonus = basicSalary * (20 / 100.0);

    // display output
    printf("Your bonus = %.2f", bonus);

    return 0;

} // end of main