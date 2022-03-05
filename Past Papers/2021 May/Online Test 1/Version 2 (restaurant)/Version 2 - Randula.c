#include<stdio.h>

int main()
{
	//declare variables
	int itemCode , quantity;
	char cType;
	float price , total , dPercentage , discount;
	
	//take user inputs
	printf("Item Code : ");
	scanf("%d" , &itemCode);
	
	printf("Quantity : ");
	scanf("%d" , &quantity);
	
	printf("Customer type(L/N) : ");
	scanf("%*c%c" , &cType);
	
	//calculate the discount and the total
	if (itemCode == 1)
	{
		price = 530;
	}
	else if (itemCode == 2)
	{
		price = 300;
	}
	else if (itemCode == 3)
	{
		price = 950;
	}
	else
	{
		printf("Invalid Item Code!\n");
		return -1;
	}
	
	if (cType == 'L' || cType == 'l')
	{
		dPercentage = 25.0 / 100;
	}
	else if (cType == 'N' || cType == 'n')
	{
		dPercentage = 5.0 / 100;
	}
	else
	{
		printf("Invalid Customer Type!!\n");
		return -1;
	}
	
	total = (float)price * quantity;
	
	discount = total * dPercentage;
	
	total -= discount;
	
	//display the total and the discount
	printf("Discount : %.2f\n" , discount);
	printf("Total bill after the discount : %.2f\n" , total);
	
	return 0;
}
