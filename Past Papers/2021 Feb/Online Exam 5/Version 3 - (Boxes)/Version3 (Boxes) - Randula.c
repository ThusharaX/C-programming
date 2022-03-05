#include<stdio.h>

int main (void)
{
	//declare the 2D array
	float boxes[4][3];
	
	//declare variables
	int i , j;
	char mesurement[20];
	float volume;
	
	//taking user inputs
	for (i = 0 ; i < 4 ; i++)
	{
		printf("Details of Box No : %d\n" , i + 1);
		for (j = 0 ; j < 3 ; j++)
		{
			switch (j)
			{
				case 0 : printf("Enter the Length of the Box : " );
						 break;
				case 1 : printf("Enter the Width of the Box : " );
						 break;
				case 2 : printf("Enter the Height of the Box : " );
						 break;
			}
			scanf("%f" , &boxes[i][j]);
		}
		printf("\n");
	}
	
	//displaying user inputs
	for (i = 0 ; i < 4 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("%.0f " , boxes[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//calculate and display the volume of the boxes
	for (i = 0 ; i < 4 ; i++)
	{
		volume = 1;
		printf("Volume of box No.%d : " , i + 1);
		for (j = 0 ; j < 3 ; j++)
		{
			volume *= boxes[i][j];
		}
		printf("%.2f\n" , volume);
		
	}
	
	return 0;
}
