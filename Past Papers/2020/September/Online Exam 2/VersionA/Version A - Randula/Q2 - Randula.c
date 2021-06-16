#include<stdio.h>

//function prototype
float calcIncrement(float salary, int noofYearsWorked);
float calcTotSalary(float salary, float increment);

int main(void)
{
	//variables
	int years;
	float salary , increment , totalSalary;
	
	//inputs from the user
	printf("Enter the Salary : ");
	scanf("%f" , &salary);
	
	printf("Enter the Years of worked : ");
	scanf("%d" , &years);
	
	increment = calcIncrement(salary , years); //calling function #1
	
	totalSalary = calcTotSalary(salary , increment); //calling function #2
	
	//print details
	printf("Increment : %.2f\n" , increment);
	printf("Total Salary : %.2f\n" , totalSalary); 
	
	return 0;
}

//called function #1
float calcIncrement(float salary, int noofYearsWorked)
{
	float increment = 0;
	
	if(noofYearsWorked > 2)
	{
		increment = salary * 10.0 / 100;
	}
	
	return increment;
}

//called function #2
float calcTotSalary(float salary, float increment)
{
	float totalSalary;
	
	totalSalary = salary + increment;
	
	return totalSalary;
}

