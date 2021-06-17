#include<stdio.h>

int main (void)
{
	//declare arrays
	int input[10];
	int positiveNum[10] = {0};
	int negativeNum[10] = {0};
	
	//declare variable
	int i  , posNos = 0 , negNos = 0;
	
	//get user inputs
	for (i = 0 ; i < 10 ; i++)
	{
		printf("Enter a Number : ");
		scanf("%d" , &input[i]);
	}
		
	//print entered numbers
	printf("Number Series : ");
	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d " , input[i]);
	}
	
	//selecting positive numbers
	for (i = 0 ; i < 10 ; i++)
	{
		if (input[i] >= 0)
		{
			positiveNum[posNos] = input[i];
			posNos++;
		}
		else
		{
			negativeNum[negNos] = input[i];
			negNos++;
		}
	}
	
	printf("\n");
	
	//printing positive numbers
	printf("Positive numbers : ");
	for (i = 0 ; i < posNos ; i++)
	{
		printf("%d " , positiveNum[i]);
	}
	printf("\n");
	
	//printing negative numbers
	printf("Negative numbers : ");
	for (i = 0 ; i < negNos ; i++)
	{
		printf("%d " , negativeNum[i]);

	}
	
	
	return 0;
}
