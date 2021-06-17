#include<stdio.h>

int main (void)
{
	int input = 0, minMarks , maxMarks;
	
	minMarks = 100;
	maxMarks = -100;
	
	printf("Enter the Marks : ");
	scanf("%d" , &input);
	
	while(input != -99)
	{
		if(input > 100 || input < 0)
		{
			printf("Invalid Input!!");
		}
		else
		{
			if (input >= maxMarks)
			{
				maxMarks = input;
			}
			else if (input < minMarks)
			{
				minMarks = input;
			}
		}
		printf("Enter the Marks : ");
		scanf("%d" , &input);
	}
	
	printf("Maximum Marks : %d\n" , maxMarks);
	printf("Minimum Marks : %d\n" , minMarks);
	
	return 0;
}
