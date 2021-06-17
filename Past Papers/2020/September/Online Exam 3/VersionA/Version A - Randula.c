#include<stdio.h>

int main (void)
{
	//declare arrays
	int input[6];
	int oddNum[6] = {0}; 
	int evenNum[6] = {0};
	
	//declare variables
	int i;
	
	//taking user inputs
	for (i = 0 ; i < 6 ; i++)
	{
		printf("Enter a number : ");
		scanf("%d" , &input[i]);
	}
	
	//printing user inputs
	printf("Number Series : ");
	for (i = 0 ; i < 6 ; i++)
	{
		printf("%d " , input[i]);
	}
	printf("\n");
	
	//selecting odd and even numbers and assign them to relevent arrays
	for (i = 0 ; i < 6 ; i++)
	{
		if (input[i] % 2 == 0)
		{
			evenNum[i] = input[i];
		}
		else
		{
			oddNum[i] = input[i];
		}
	}
	
	//display odd numbers
	printf("Odd Numbers : ");
	for (i = 0 ; i < 6 ; i++)
	{
		if (oddNum[i] != 0)
		{
			printf("%d " , oddNum[i]);
		}	
	}
	printf("\n");
	
	//display even numbers
	printf("Even Numbers : ");
	for (i = 0 ; i < 5 ; i++)
	{
		if (evenNum[i] != 0)
		{
			printf("%d " , evenNum[i]);
		}	
	}
	
	
	return 0;
}
