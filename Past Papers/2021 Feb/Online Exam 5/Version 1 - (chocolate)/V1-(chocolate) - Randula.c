#include<stdio.h>

int main (void)
{
	//declaring array
	float size[3][5] = {0};
	float avgSize[3] = {0};
	
	//declaring variables
	int i , j;
	float totalSize;
	
	//taking inputs from the user
	for (i = 0 ; i < 3 ; i++)
	{
		printf("Production of Day No.%d\n" , i + 1);
		for (j = 0 ; j < 5 ; j++)
		{
			printf(" Produce of the machine No.%d : " , j + 1);
			scanf("%f" , &size[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//displaying user inputs
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			printf("%.1f " , size[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//calculate the average size of each day and assign to the relevant array
	for (i = 0 ; i < 3 ; i++)
	{
		totalSize = 0;
		for (j = 0 ; j < 5 ; j++)
		{
			totalSize += size[i][j];
		}	
		avgSize[i] = totalSize / 5;
	}
	
	//display the average size
	for (i = 0 ; i < 3 ; i++)
	{
		printf("Average Produce of Day No.%d : %.2f\n" , i + 1 , avgSize[i]);
	}
	return 0;
}
