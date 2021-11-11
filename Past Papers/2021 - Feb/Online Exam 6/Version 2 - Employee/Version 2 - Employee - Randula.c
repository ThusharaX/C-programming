#include<stdio.h>

//declare the structure
struct emp
{
	char empId[5];
	char name[20];
	int exp;
	float salary;
	
}Employee[3];

int main (void)
{
	//declare variables
	float increment;
	int i;
	
	//taking user inputs
	for (i = 0 ; i < 3 ; i++)
	{
		printf("Enter Employee ID : ");
		scanf("%s" , Employee[i].empId);
		
		printf("Enter Employee name : ");
		scanf("%s" , Employee[i].name);
		
		printf("Enter Employee Experience (in Years) : ");
		scanf("%d" , &Employee[i].exp);
		
		printf("Enter Employee Salary : ");
		scanf("%f" , &Employee[i].salary);
		
		printf("\n");
	}
	printf("\n");
	
	//display the user's inputs
	for(i = 0 ; i < 3 ; i ++)
	{
		printf("%s\t%s\t%d\t%.2f\n" , Employee[i].empId , Employee[i].name , Employee[i].exp , Employee[i].salary);
	}
	printf("\n");
	
	//header of the table
	printf("Employee ID\tName\tIncrement\n");
	
	//display the employee details who got the increment and calculate and display the increment
	for (i = 0 ; i < 3 ; i++)
	{
		if (Employee[i].exp > 2)
		{
			printf("%s\t\t%s\t" , Employee[i].empId , Employee[i].name);
			printf("%.2f\n" , Employee[i].salary * 10.0 / 100);
		}
		
	}
	
	return 0;
}
