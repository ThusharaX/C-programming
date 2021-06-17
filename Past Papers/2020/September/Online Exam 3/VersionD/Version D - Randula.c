#include<stdio.h>

int main(void)
{
	//declaring array
	int num[8];
	
	//declaring variables
	int i , patten = 0;
	
	//taking user inputs (numbers between 1 - 4)
	for (i = 0 ; i < 8 ; i++)
	{
		printf("Enter a number (1 - 4) : ");
		scanf("%d" , &num[i]);
		
		if(num[i] > 4 || num[i] < 1)
		{
			printf("Invalid Input!!\n");
			i--;
		}
	}
	
	//printing user inputs
	printf("Num Array : ");
	for (i = 0 ; i < 8 ; i++)
	{
		printf("%d " , num[i]);
	}
	printf("\n");
	
	
	//checking the given pattern
	for (i = 0 ; i < 8 ; i++)
	{
		if (num[i] == 3 && num[i - 1] == 1)
		{
			patten++;
		}
	}
	
	//getting the output
	printf("Number of times the pattern '1 3' appear : %d\n" , patten);
	
	return 0;
}
