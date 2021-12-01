#include<stdio.h>

int main()
{
	//declare variables
	int foodType , noOfGuests;
	char pType;
	float pPrice , foodPrice , bill;
	
	//take user inputs
	printf("Package Type : ");
	scanf("%c" , &pType);
	
	printf("Food Type : ");
	scanf("%d" , &foodType);
	
	printf("Number Of Guests : ");
	scanf("%d" , &noOfGuests);

	//calculate the bill
	if (pType == 'S' || pType == 's')
	{
		pPrice = 10000;
	}
	else if (pType == 'G' || pType == 'g')
	{
		pPrice = 25000;
	}
	else
	{
		printf("Invalid Package Type\n");
		return -1;
	}
	
	if (foodType == 1)
	{
		foodPrice = 1000;
	}
	else if (foodType == 2)
	{
		foodPrice = 2000;
	}
	else if (foodType == 3)
	{
		foodPrice = 1500;
	}
	else
	{
		printf("Invalid Food Type\n");
		return -1;	
	}
	
	bill = (float)pPrice + (foodPrice * noOfGuests);
	
	//display the bill amount
	printf("Bill Amount : %.2f\n" , bill);

	return 0;
}
