//importing libraries
#include<stdio.h>

int main(void)
{
	//declare variables
	int input = -1 , answer = 1;
	int reduce = 0 , count;
	
	//entering the loop
	while(1)
	{
		//taking user inputs
		printf("Enter a Positive Number : ");
		scanf("%d" , &input);
	
		if (input >= 0)
		{
			while (reduce < input)
			{
				answer *= (input - reduce); //do the calculation
				reduce++;
			}
			printf("The Factorial of %d is : %d\n" , input , answer);
			break;
		}
		else
		{
			printf("You have entered a Negative Number!!\n"); //get another chance if user enters a negative number
		}
	}
	
	return 0;
}
