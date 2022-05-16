
/*
Name: Shalinda Fernando
Date: 29/04/2022
Student ID: REDACTED
Group: REDACTED
*/


#include <stdio.h>

// Fuction Prototypes: Tells the compiler we have the bellow functions used later in our code
float calcIcrement(float salary, int noofYearsWorked);
float calcTotalSalary(float salary, float increment);


int main(){

    // Variable Init
    float salary, increment, totSalary;
    int noOfYearsWorked;

    // Prompt and get the required information from the user
    printf("Enter salary : ");
    scanf("%f", &salary);
    
    printf("Enter years worked : ");
    scanf("%d", &noOfYearsWorked);

    increment = calcIcrement(salary, noOfYearsWorked);      // Calculate Increment
    totSalary = calcTotalSalary(salary, increment);         // Calculate Total Salary

    // Display the results to the user
    printf("Increment : %.2f", increment);
    printf("\nTotal salary : %.2f", totSalary);

    return 0;
}

// Function to calculate the increment
float calcIcrement(float salary, int noofYearsWorked){
    if(noofYearsWorked > 2){
        return (10.0 / 100.0) * salary;
    }
    return 0;
}

// Function to calculate the total salary
float calcTotalSalary(float salary, float increment){
    return salary + increment;
}