#include<stdio.h>

int main (void)
{
	//declaring variables
	int itemAmount;
	float itemPrice , totalPrice = 0 , discount = 0;
	char cardType;
	
	//taking user inputs about the item price
	printf("Enter Item Price : ");
	scanf("%f" , &itemPrice);
	
	//taking user inputs about the item amount
	printf("Enter Item Amount : ");
	scanf("%d" , &itemAmount);
	
	
	
	//taking user inputs about the card type
	printf("Enter Card Type : ");
	scanf("%*c%c" , &cardType);
	
	//calculate the discount
	if (cardType == 'V' || cardType == 'v')
	{
		if (itemAmount <= 2)
		{
			discount = (float) (itemPrice * itemAmount) * 15.0 / 100;
		}
		else
		{
			discount = (float) (itemPrice * 2.0) * 15.0 / 100;
		}
	}
	else if (cardType == 'P' || cardType == 'p')
	{
		if (itemAmount <= 5)
		{
			discount = (float) (itemPrice * itemAmount) * 18.0 / 100;
		}
		else
		{
			discount = (float) (itemPrice * 5.0) * 18.0 / 100;
		}
	}
	else if (cardType == 'S' || cardType == 's')
	{
		if (itemAmount <= 5)
		{
			discount = (float) (itemPrice * itemAmount) * 20.0 / 100;
		}
		else
		{
			discount = (float) (itemPrice * 5.0) * 20.0 / 100;
		}
	}
	else 
	{
		printf("Invalid Card Input!!!\n");
		return -1;
	}
	
	printf("%.2f\n%.2f\n" , itemPrice * itemAmount , discount);
	
	//calculate and display the final price
	totalPrice = (itemPrice * itemAmount) - discount;
	
	printf("\n");
	printf("Total Price : Rs.%.2f\n" , totalPrice);
	
	return 0;
}
