#include <stdio.h>

//function main begins prgram execution
int main(void)
{
	//declaring variables
	int itemCode, noOfItems;
	char customerType;
	float billAmount = 0, unitPrice = 0, discount = 0, discountPercentage = 0, finalAmount = 0;
	
	//taking the item code as the user input
	printf("Item Code: ");
	scanf("%d", &itemCode);
	
	//dciding and calculating the price
	if( itemCode == 1 )
	{
		unitPrice = 530;
	}
	else if( itemCode == 2 )
	{
		unitPrice = 300;
	}
	else if( itemCode == 3 )
	{
		unitPrice = 950;
	}
	else
	{
		printf("Invalid Item Number");
		return 0;
	}
	
	//taking the quantity as the user input
	printf("Quantity: ");
	scanf("%d", &noOfItems);
	
	//taking the customer type as the user input
	printf("Customer type: ");
	scanf("%*c%c", &customerType);
		
	//deciding the discount
	if( customerType == 'L' || customerType == 'l' )
	{
		discountPercentage = 0.25;	
	}
	else if( customerType == 'N' || customerType == 'n' )
	{
		discountPercentage = 0.05;
	}
	else
	{
		printf("Invalid Customer Type");
		return 0;
	}
	
	//calculating the total amount
	billAmount = (float)unitPrice * noOfItems;
	discount = billAmount * discountPercentage;
	
	finalAmount = billAmount - discount;
	
	//displaying the discount
	printf("\nDiscount: %.2f", discount);
	
	//displaying the total bill
	printf("\nTotal bill after the discount: %.2f", finalAmount);
	
	return 0;
	
} //end function main
