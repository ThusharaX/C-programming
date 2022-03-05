#include<stdio.h>

int main (void)
{
	//declaring arrays
	float temp[2][3];
	float avgTemp[2];
	//declaring variables
	int i , j;
	float total;
	
	//input details from the user
	for (i = 0 ; i < 2 ; i++)
	{
		printf("Enter details about ");
		if (i == 0)
		{
			printf("Colombo\n");
		}
		else
		{
			printf("Kandy\n");
		}
		for (j = 0 ; j < 3 ; j++)
		{
			printf("Enter the temprature in the ");
			if (j == 0)
			{
				printf("Morning : ");
			}
			else if (j == 1)
			{
				printf("Noon : ");
			}
			else
			{
				printf("Evening : ");
			}
			scanf("%f" , &temp[i][j]);
		}
	}
	
	//printing user entered data for cheching purpose
	/*for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("%.2f " , temp[i][j]);
		}
		printf("\n");
	}*/
	
	printf("\n");
	//calculating the each town's average temperature
	for (i = 0 ; i < 2 ; i++)
	{
		total = 0;
		for (j = 0 ; j < 3 ; j++)
		{
			total += temp[i][j];
		}
		avgTemp[i] = total / 3;
		
		printf("Average Temprature in ");
		if (i == 0)
		{
			printf("Colombo : ");
		}
		else
		{
			printf("Kandy : ");
		}
		printf("%.1f\n" , avgTemp[i]);
	}
	
	
	return 0;
}
