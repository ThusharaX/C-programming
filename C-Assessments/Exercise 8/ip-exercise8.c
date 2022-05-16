
/*
Name: Shalinda Fernando
Date: 01/05/2022
Student ID: REDACTED
Group: REDACTED
*/

#include <stdio.h>

int main(void){
    
    // Init variables
    double salaries[5], salary;
    int counter, employeeID;

    // Code block to initialze each element in the array to -1
    for (counter = 0; counter < 5; counter++){
        salaries[counter] = -1;
    }

    // Code block to get salary from 5 employees
    counter = 0;
    while (counter < 5){
        
        // Prompt and get the required information from the user
        printf("Input salary of employee %d: ", counter + 1);
        scanf("%lf", &salary);

        // Salary can't be less than 0. If so print an error and ask user to re-enter
        if(salary < 0){
            puts("Please re-enter the amount.");
            continue;
        }

        salaries[counter] = salary;     // Add salary to salaries array
        counter++;                      // Increment the counter by 1

    }

    // Code block: Print salary in salaries array to the user screen. 
    printf("\n%s %14s\n", "Employee number", "Salary");

    // Loop through salaries array
    for (counter = 0; counter < 5; counter++){
        // employeeID starts with 1. Counter starts with 0.  So, add 1 to the incrementer.
        employeeID = counter + 1;
        
        // Get the specific element determined by the counter from salariesArray
        salary = salaries[counter];

        // Print to screen. 30 => spaces; .2 => round to 2 decimals places; lf => Double type conversion character.
        printf("%d %30.2lf\n", employeeID, salary); 
    }

    return 0;
}


