#include<stdio.h>

float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

int main (void)
{
	int grade;
	float hours , salary;
	
	printf("Enter Grade : ");
	scanf("%d" , &grade);
	
	printf("Enter No of hours Worked of the week : ");
	scanf("%f" , &hours);
	
	salary = calculateWeeklySalary(grade , hours);
	
	printDetails(grade , hours , salary);
	
	return 0;
}

float calculateWeeklySalary(int grade, float hrsWorked)
{
	float salary;
	
	if (grade == 1)
	{
		salary = 100.00 * hrsWorked;
	}
	else if (grade == 2)
	{
		salary = 200.00 * hrsWorked;
	}
	else if (grade == 3)
	{
		salary = 300.00 * hrsWorked;
	}
	
	return salary;
}

void printDetails(int grade, float hrsWorked, float salary)
{
	printf("Grade - %d\n" , grade);
	printf("No of hours worked for the week : %.0f\n" , hrsWorked);
	printf("Salary of the employee : Rs.%.2f\n" , salary);
}
