// Exersice 3 - 3
// Bonus Calculate

#include <stdio.h>

int main (void)
{
    int salary, bonus; //declaration

    printf("Enter your salary: "); //initialization
    scanf("%d", &salary);

    bonus = (salary / 100) * 20; // Calculate  Bonus

    // printf("Salary = %d\n", salary);
    printf("Bonus = %d\n", bonus); // output

    return 0;
}
