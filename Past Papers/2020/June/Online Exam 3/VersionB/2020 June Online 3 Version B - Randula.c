#include<stdio.h>

int main (void)
{
	//declaring array
	int seat[10] = {0};
	
	//declaring variables
	int i , input;
	
	//taking user inputs until user enters -1
	printf("Please input the seat number (1 - 10) : ");
	scanf("%d" , &input);
	
	//sort data by the input
	while(input != -1)
	{
		if (input >= 1 && input <= 10)
		{
			if ((seat[input - 1]) > 0)
			{
				printf("The Seat No.%d is reseved!!\n" , input);
			}
			else
			{
				seat[input - 1]++;
			}
		}
		else
		{
			printf("Sorry. Please input a valid seat number!!!\n");
		}
		
		//taking user inputs until user enters -1
		printf("Please input the seat number (1 - 10) : ");
		scanf("%d" , &input);
	}
	printf("\n");
	
	//print the collected data
	printf("Reserved Seat Numbers : ");
	for (i = 0 ; i < 10 ; i++)
	{
		if (seat[i] > 0)
		{
			printf("%d " , i + 1);
		}
	}
	
	return 0;
}
