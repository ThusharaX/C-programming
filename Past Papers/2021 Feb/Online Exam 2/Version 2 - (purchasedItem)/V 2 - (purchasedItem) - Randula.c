#include<stdio.h>

int main (void)
{
	//declare variables
	int item , quantity;
	float totalPrice = 0 , unitPrice;
	
	//taking user inputs until user enters -1 for item
	printf("Enter Item : ");
	scanf("%d" , &item);
	
	while(item != -1)
	{
		unitPrice = 0;
		
		printf("Enter Quantity : ");
		scanf("%d" , &quantity);
		
		//calculate the unit price by the input
		switch (item)
		{
			case 1 : unitPrice = (float)300.25 * quantity;
					 break;
			case 2 : unitPrice = (float)145.50 * quantity;
					 break;
			case 3 : unitPrice = (float)525.00 * quantity;
					 break;
			default : printf("Invalid Input!!\n");
					  break;
		}
		totalPrice += unitPrice;
		
		printf("\n");
		printf("Enter Item : ");
		scanf("%d" , &item);
	}
	printf("Total Price to pay Rs : %.2f\n" , totalPrice);
	
	return 0;
}
