#include <stdio.h>

//function main begins program execution
int main(void)
{
	//declaring variables
	int age;
	float bankBalance;
	
	//taking age as the user input
	printf("Enter your Age: ");
	scanf("%d", &age);
	
	//taking bank balance as the user input
	printf("Enter your Bank balance: ");
	scanf("%f", &bankBalance);
	

	//deciding and displaying the gift
	if( age <= 18)
	{
		if( bankBalance <= 100000 )
		{
			printf("\nCongratulations!!!\n");
			printf("\nGift: School Bag");	
		}	
		else
		{
			printf("\nCongratulations!!!\n");
			printf("\nGift: Tablet ");
		}
	}	
	
	else if( age > 18 )
	{
		if( bankBalance <= 100000)
		{
			printf("\nCongratulations!!!\n");
			printf("\nGift: Travelling Bank");
		}
		else
		{
			printf("\nCongratulations!!!\n");
			printf("\nGift: Rice Cooker");
		}
	}
	

	return 0;
	
} //end functin main
