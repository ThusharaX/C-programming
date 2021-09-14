#include <stdio.h>

//function main begins program execution
int main(void)
{
	//declaring variables
	char packageType;
	int foodType = 0, noOfGuests = 0;
	float packagePrice = 0, unitFoodPrice = 0, billAmount = 0;
	
	//taking the package type as the user input
	printf("Enter Package Type: ");
	scanf("%c", &packageType);
	
	//deciding the package price
	if( packageType == 'S' || packageType == 's')
	{
		packagePrice = 10000;
	}
	else if( packageType == 'G' || packageType == 'g')
	{
		packagePrice = 25000;
	}
	else
	{
		printf("Invalid Package Type");
		return 0;
	}
	
	//taking the food type as the user input
	printf("Enter food type: ");
	scanf("%d", &foodType);
	
	//deciding the food price per person
	if( foodType == 1 )
	{
		unitFoodPrice = 1000;
	}
	else if( foodType == 2 )
	{
		unitFoodPrice = 2000;
	}
	else if( foodType == 3 )
	{
		unitFoodPrice = 1500;
	}
	else
	{
		printf("Invalid Food Type");
		return 0;
	}
	
	//taking number of guests as the user input
	printf("Enter the number of guests: ");
	scanf("%d", &noOfGuests);
	
	//calculating the total price
	billAmount = packagePrice + (float)( noOfGuests * unitFoodPrice);
	
	//displaying the total bill amount
	printf("Bill Amount = %.2f", billAmount);
	 
	return 0;
} //end function main
