#include<stdio.h>

int main (void)
{
	double sales[5];
	
	//declare variable
	int i;
	double input;
	
	//taking user inputs for 5 employees
	for (i = 0 ; i < 5 ; i++)
	{
		printf("Input the sales of Salesmen No.%d : " , i + 1);
		scanf("%lf" , &input);
		
		//only take inputs > 0
		if (input < 0)
		{
			printf("Please re-enter the amount!!\n");
			i--;
		}
		else
		{
			sales[i] = input;
		}
	}
	printf("\n");
	
	//display details of employees who have satisfied the criteria
	printf("Sales Person Number\tSales Amount\n");
	for (i = 0 ; i < 5 ; i++)
	{
		if (sales[i] > 20000)
		{
			printf("%d\t\t\t%.2lf\n" , i + 1 , sales[i]);
		}
	}
	return 0;
}
