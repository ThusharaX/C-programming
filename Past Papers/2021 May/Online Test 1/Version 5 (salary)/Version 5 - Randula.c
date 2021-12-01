#include<stdio.h>

int main()
{
	//declare variables
	char position;
	float sales , mSalary , comRate , commission , salary;
	
	//take user inputs
	printf("Position : ");
	scanf("%c" , &position);
	
	printf("Sales Amount : ");
	scanf("%f" , &sales);
	
	//calculate the commision and the salary
	if (position == 'M' || position == 'm')
	{
		mSalary = 50000;
	}
	else if (position == 's' || position == 'S')
	{
		mSalary = 75000;
	}
	else
	{
		printf("Invalid Input!!\n");
		return -1;
	}
	
	if (sales < 30000)
	{
		comRate = 0;
	}
	else
	{
		comRate = 10.0 / 100;
	}
	
	commission = sales * comRate;
	
	salary = mSalary + commission;
	
	//display the commission and the salary
	printf("Commission : %.2f\n" , commission);
	printf("Salary : %.2f\n" , salary);

	return 0;
}
