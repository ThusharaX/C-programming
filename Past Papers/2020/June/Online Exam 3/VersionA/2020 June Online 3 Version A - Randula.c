#include<stdio.h>

int main (void)
{
	//declare array
	int rate[5] = {0};
	
	//declare variables
	int i , input;
	
	//taking user inputs until user enters -1
	printf("Please input the service rating (1 - 5) : ");
	scanf("%d" , &input);
	
	//sort data by the input
	while(input != -1)
	{
		if (input >= 1 && input <= 5)
		{
			rate[input - 1]++;
		}
		else
		{
			printf("Invalid Input!!!\n");
		}
		
		//taking user inputs until user enters -1
		printf("Please input the service rating (1 - 5) : ");
		scanf("%d" , &input);
	}
	printf("\n");
	
	//print the collected data
	printf("Rating\tNumber of response\n");
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d\t%d\n" , i + 1 , rate[i]);	
	}	
	
	return 0;
}
