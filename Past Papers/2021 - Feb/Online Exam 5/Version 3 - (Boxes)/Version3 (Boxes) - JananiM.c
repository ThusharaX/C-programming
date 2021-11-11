// Header file
#include <stdio.h>

// Function main begins program execution
int main (void)
{
	//Declaring arrays & Initializing all array elements to zero
	int boxes [4] [3] = {0};
	int volume [4] = {0};
	
	//Declaring variables
	int i;	// i for rows in the array
	int j;	//j for columns in the array
	
	//Getting user inputs and storing in array elements
	for (i = 0; i < 4; i++)
	{
		printf("Enter details for box %d\n", i+1);
		
		for (j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				printf("Length : ");	// prompt for input
				scanf("%d", &boxes [i] [j]);	// read the input from user
			}
			if (j == 1)
			{
				printf("Width : ");		// prompt for input
				scanf("%d", &boxes [i] [j]);	// read the input from user
			}
			if (j == 2)
			{
				printf("Height : ");		// prompt for input
				scanf("%d", &boxes [i] [j]);	// read the input from user
			}
		}
		printf("\n");
	}
	
	// Calculating the volume of each box
	
	for (i = 0; i < 4; i++)
	{
		volume [i] =  boxes [i] [0] * boxes [i] [1] * boxes [i] [2];
	}
	
	// Displaying the volume stored in each array element
	
	for (i = 0; i < 4; i++)
	{
		printf("Volume of box %d : %d\n", i+1, volume [i]);
	}

	
	return 0;
}	// End function main
