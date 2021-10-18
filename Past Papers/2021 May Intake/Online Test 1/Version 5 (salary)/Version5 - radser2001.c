#include <stdio.h>

//function main begins program execution
int main(void)

{
	//declaring variables
	char position;
	float basicSalary, salesAmount, totalSalary, commission;
	
	//taking the position as the user input
	printf("Position: ");
	scanf("%c", &position);
	
	//deciding the basic salary according to the position
	if( position == 'M' || position == 'm' )
	{
		basicSalary = 50000;
	}
	else if( position = 'S' || position == 's' )
	{
		basicSalary = 75000;
	}
	else
	{
		printf("Invalid Position");
		return 0;
	}
	
	//taking the sales amount as the user input
	printf("Sales Amount: ");
	scanf("%f", &salesAmount);
	
	//deciding the commission based on the sales amount
	if( salesAmount < 30000 )
	{
		commission = salesAmount * 0.0;
		printf("Commission = %.2f\n", commission);
	}
	else if( salesAmount > 30000)
	{
		commission = salesAmount * 0.1;
		printf("Commission: %.2f\n", commission);
	}
	
	//calculating the total salary
	totalSalary = basicSalary + commission;
	
	//displaying the total salary
	printf("Salary: %.2f", totalSalary);
	
	return 0;
} //end function main
