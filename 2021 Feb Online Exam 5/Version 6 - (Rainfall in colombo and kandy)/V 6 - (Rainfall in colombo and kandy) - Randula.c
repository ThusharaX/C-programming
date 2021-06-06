#include<stdio.h>

int main(void)
{
	//declaring arrays
	int rain[2][3];
	int maxRain[2] = {0};
	//declaring variables
	int i, j;
	
	//taking input from the user
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
			printf("Enter the Rainfall in the ");
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
			scanf("%d" , &rain[i][j]);
		} 
	}
	
	//printing user entered data for checking purpose
	/*for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("%d " , rain[i][j]);
		}
		printf("\n");
	}*/
	
	printf("\n");
	//calculate and print the maximum rainfall of each town
	for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			if (maxRain[i] < rain[i][j])
			{
				maxRain[i] = rain[i][j];
			}
			
		}
		
		printf("Maximum Rainfall in ");
		if (i == 0)
		{
			printf("Colombo : ");
		}
		else
		{
			printf("Kandy : ");
		}
		printf("%d\n" , maxRain[i]);
	}
	
	return 0;
}
