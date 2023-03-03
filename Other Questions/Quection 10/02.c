#include <stdio.h>

float calculateweeklysalary(int grade, float hrsworked);
void printdetails(int grade, float hrsworked, float salary);
int main()
{
	int grade;
	float hrsworked, salary;
	
	printf("Enter your grade :");
	scanf("%d", &grade);
	
	printf("Enter total number of hours worked :");
	scanf("%f", &hrsworked);
	
	salary = calculateweeklysalary(grade,hrsworked);
	
	printdetails(grade, hrsworked, salary);
	return 0;
	
}

float calculateweeklysalary(int grade, float hrsworked)
{
	float weeklysalary;
	float hourlyrate;
	if(grade == 1)
	{
		hourlyrate = 100;
	}
	else if(grade == 2)
	{
		hourlyrate = 200;
	}
	else if(grade == 3)
	{
		hourlyrate = 300;
	}
	else
	{
		printf("\nInvalid grade----------\n");
	}
	
	weeklysalary = hrsworked * hourlyrate;
	
	return weeklysalary;
}

void printdetails(int grade, float hrsworked, float salary)
{

	
	printf("\nYour grade : %d\nYour worked hours : %.2f\nyour salary : %.2f",grade,hrsworked, salary);
	return ;
}
