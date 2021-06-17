#include<stdio.h>

float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemNo, int quantity, float totalCost);

int main (void)
{
	int itemNo , quantity;
	float totalCost;
	
	printf("Enter Item No : ");
	scanf("%d" , &itemNo);
	
	printf("Enter Quantity : ");
	scanf("%d" , &quantity);
	
	totalCost = calculateTotalCost(itemNo, quantity);
	printDetails(itemNo , quantity, totalCost);
	
	return 0;
}

float calculateTotalCost(int itemNo, int quantity)
{
	float totalCost;
	
	if (itemNo == 1)
	{
		totalCost = 100.00 * quantity;
	}
	else if (itemNo == 2)
	{
		totalCost = 200.00 * quantity;
	}
	else if (itemNo == 3)
	{
		totalCost = 300.00 * quantity;
	}
	
	return totalCost;
}

void printDetails(int itemNo, int quantity, float totalCost)
{
	printf("Item No : %d\n" , itemNo);
	printf("Quantity : %d\n" , quantity);
	printf("Total Cost : Rs.%.2f\n" , totalCost);
}
