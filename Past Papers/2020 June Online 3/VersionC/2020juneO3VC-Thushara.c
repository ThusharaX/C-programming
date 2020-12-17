/* 2020 June
 * Online Exam 3
 * Version C
 */ 

#include<stdio.h>

// size of an array
# define SIZE 5

// main function
int main(void)
{
	double salaries[SIZE] = {-1, -1, -1, -1, -1}; // salaries array
	double salary = 0; // salary enterd by user
	int count; // counter control variable
	
	// begin for loop
	for (count = 1; count <= SIZE; ) {
		
		// user input for salary
		printf("Input the salary of employee %d :", count); // prompt for input
		scanf("%lf", &salary);
		
		// check if salary is a negative value
		if (salary < 0) {
			
			// invalid salary error message
			printf("Please re-enter the amount\n");
			continue;
		} // end if
		
		// check if salary < 10000.00
		if (salary < 10000.00) {
			
			// add 10% to salary
			salary += salary * 10 / 100;
		} // end if
		
		// store salary in to salaries array
		salaries[count - 1] = salary;
		count++;
	}
	
	// printing array
	printf("\nEmployee number\t\tSalary\n");
	for (count = 1; count <= SIZE; count++) {
		printf("%d\t\t\t%.2f\n", count, salaries[count - 1]);
	}
	
	return 0;
}
