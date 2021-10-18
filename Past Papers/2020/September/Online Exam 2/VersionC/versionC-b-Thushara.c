#include<stdio.h>

// Online Test2 - Version C - b

// function prototype
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

// main function
int main(void)
{
	// variable declaration
	int grade;
	float hrsWorked, salary;
	
	// input grade & hrsWorked
	printf("Grade : ");
	scanf("%d", &grade);
	printf("Hours Worked : ");
	scanf("%f", &hrsWorked);
	
	// function call
	salary = calculateWeeklySalary(grade, hrsWorked);
	
	// function call
	printDetails(grade, hrsWorked, salary);

    return 0;
}

// function implementation
float calculateWeeklySalary(int grade, float hrsWorked)
{
	float weeklySalary, hourlyRate;
	
	// checking grade
	switch (grade) {
		case 1 : weeklySalary = hrsWorked * 100.00;
		break;
		case 2 : weeklySalary = hrsWorked * 200.00;
		break;
		case 3 : weeklySalary = hrsWorked * 300.00;
		break;
		default : weeklySalary = -1;
	}
	
	// return Weekly Salary
	return weeklySalary;
}

void printDetails(int grade, float hrsWorked, float salary)
{
	// checking if grade is valid
	if (salary != -1) {
		printf("\nGrade : %d\n", grade);
		printf("Hours worked : %.2f\n", hrsWorked);
		printf("Weekly Salary : %.2f\n", salary);
	}
	else {
		printf("\nInvalid Grade\n");
	}
}





