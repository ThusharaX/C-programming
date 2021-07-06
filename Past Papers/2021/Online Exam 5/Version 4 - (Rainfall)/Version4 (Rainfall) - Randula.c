#include<stdio.h>

int main (void)
{
	//declare array
	int rainfall[3][4];
	
	//declare variable
	int i , j;
	int maxRainfall = 0;
	
	//taking user input
	for (i = 0 ; i < 3 ; i++)
	{
		printf("Details of day No.%d\n" , i + 1);
		for (j = 0 ; j < 4 ; j++)
		{
			printf("Rainfall of City No.%d : " , j + 1);
			scanf("%d" , &rainfall[i][j]);
		}
		printf("\n");
	}
	
	//displaying user inputs
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 4 ; j++)
		{
			printf("%d " , rainfall[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//displaying maximum rainfall of each day
	for (i = 0 ; i < 3 ; i++)
	{
		maxRainfall = 0;
		
		printf("Maximum Rainfall of Day No.%d : " , j + 1);
		for (j = 0 ; j < 4 ; j++)
		{
			if (maxRainfall < rainfall[i][j])
			{
				maxRainfall = rainfall[i][j];
			}
		}
		printf("%d\n" , maxRainfall);
	}
	
	return 0;
}
