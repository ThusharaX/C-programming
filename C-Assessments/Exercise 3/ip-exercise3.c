
/*
Name: Shalinda Fernando
Date: 29/04/2022
Student ID: REDACTED
Group: REDACTED
*/

#include <stdio.h>

// Fuction Prototypes: Tells the compiler we have the bellow functions used later in our code
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);


int main(void){

    // Variable Init
    int grade, weeklySalary;
    float hrsWorked;

    // Prompt and get the required information from the user
    printf("Enter employee grade: ");
    scanf("%d", &grade);

    printf("Enter total number of hours worked: ");
    scanf("%f", &hrsWorked);

    weeklySalary = calculateWeeklySalary(grade, hrsWorked);     // Calculate Weekly Salary
    printDetails(grade, hrsWorked, weeklySalary);               // Display Results

    return 0;
}


// Function to calculate weekly salary
float calculateWeeklySalary(int grade, float hrsWorked){

    switch (grade){
        case 1:
            return 100.00 * hrsWorked;
        
        case 2:
            return 200.00 * hrsWorked;
        
        case 3:
            return 300.00 * hrsWorked;
    }

}


// Function to print the results back to the screen
void printDetails(int grade, float hrsWorked, float salary){
    
    // Display Results
    printf("\n================== RESULTS ==================\n\n"
    "Grade: %d\n"
    "Total Number of Hours Worked: %.2f\n"
    "Weekly Salary: %.2f\n\n", 
    grade, hrsWorked, salary);

}