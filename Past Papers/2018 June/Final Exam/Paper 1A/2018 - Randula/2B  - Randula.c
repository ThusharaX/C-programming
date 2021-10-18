#include<stdio.h>

int main (void)
{
	//define array
	char bulbs[4][4];
	//define variables
	int i , j;
	
	//nested for loop for get inuputs to the 2D array
	for (i = 0 ; i < 4 ; i++)
	{
		for(j = 0 ; j < 4 ; j++)
		{			
			printf("Enter the bulb color fo row %d and colunm %d : " , i + 1 , j + 1 );
			scanf("%c%*c" , &bulbs[i][j]);
			
			//retake input for the relevent array if user enters an invalid input
			if(!(bulbs[i][j] == 'R' || bulbs[i][j] == 'G' || bulbs[i][j] == 'B'))
			{
				printf("Invalid Selection!!\n");
				j--;
			}
		}
		printf("\n");
	}
	
	//print the array table
	for (i = 0 ; i < 4 ; i++)
	{
		for(j = 0 ; j < 4 ; j++)
		{
			printf("%c " , bulbs[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	//printing the positions of red bulbs
	printf("Red LED bulb positions\n");
	for (i = 0 ; i < 4 ; i++)
	{
		for(j = 0 ; j < 4 ; j++)
		{
			if (bulbs[i][j] == 'R')
			{
				printf("[%d,%d] " , i , j);
			}
		}
	}
	
	printf("\n");
	//printing the positions of blue bulbs
	printf("Blue LED bulb positions\n");
	for (i = 0 ; i < 4 ; i++)
	{
		for(j = 0 ; j < 4 ; j++)
		{
			if (bulbs[i][j] == 'B')
			{
				printf("[%d,%d] " , i , j);
			}
		}
	}
	printf("\n");
	//printing the positions of green bulbs
	printf("Green LED bulb positions\n");
	for (i = 0 ; i < 4 ; i++)
	{
		for(j = 0 ; j < 4 ; j++)
		{
			if (bulbs[i][j] == 'G')
			{
				printf("[%d,%d] " , i , j);
			}
		}
	}
	return 0;
}
