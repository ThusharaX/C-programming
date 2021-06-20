#include<stdio.h>

int main (void)
{
	double salaries[5];
	
	//declare variable
	int i;
	double input;
	
	//taking user inputs for 5 employees
	for (i = 0 ; i < 5 ; i++)
	{
		printf("Input the salary of Employee No.%d : " , i + 1);
		scanf("%lf" , &input);
		
		//only take inputs > 0
		if (input < 0)
		{
			printf("Please re-enter the amount!!\n");
			i--;
		}
		else
		{
			salaries[i] = input;
		}
	}
	printf("\n");
	
	//display the employees' new salary
	printf("Employee Number\tSalary\n");
	for (i = 0 ; i < 5 ; i++)
	{
		//give a 10% increment for employees less than 10000
		if (salaries[i] < 10000)
		{
			salaries[i] *= 110.0 / 100;
		}
		
		//display salaries
		printf("%d\t\t%.2lf\n" , i + 1 , salaries[i]);
	}
	
	return 0;
}
