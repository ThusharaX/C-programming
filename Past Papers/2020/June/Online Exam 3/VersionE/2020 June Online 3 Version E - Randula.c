#include<stdio.h>

int main (void)
{
	//declare array
	double price[6];
	
	//declare variables
	int i ;
	double input;
	
	//taking user inputs of 5 book
	for (i = 0 ; i < 6 ; i++)
	{
		printf("Input the salary of Book No.%d : " , i + 1);
		scanf("%lf" , &input);
		
		//only take inputs > 0
		if (input <= 0)
		{
			printf("Please re-enter the amount!!\n");
			i--;
		}
		else
		{
			price[i] = input;
		}
	}
	printf("\n");
	
	//display the new price of the books
	printf("Book ID\tPrice\n");
	
	for (i = 0 ; i < 6 ; i++)
	{
		//calculate the price reduction of the books 
		price[i] *= 90.0 / 100;
		
		printf("%d\t%.2lf\n" , i + 1 , price[i]);
	}
	
	
	return 0;
}
