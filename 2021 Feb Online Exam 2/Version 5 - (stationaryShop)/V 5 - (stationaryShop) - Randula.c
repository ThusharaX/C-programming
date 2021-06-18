#include<stdio.h>

int main (void)
{
	//declare variables
	int itemNo , quantity;
	float totalPrice = 0 , unitPrice;
	
	//taking inputs until user enters -99 to type
	printf("Enter Item : ");
	scanf("%d" , &itemNo);
	
	//calculation by the user inputs
	while(itemNo != -99)
	{
		unitPrice = 0;
		
		printf("Enter Quantity : ");
		scanf("%d" , &quantity);
		
		switch(itemNo)
		{
			case 1 : unitPrice = (float)30.00 * quantity;
					 break;
			case 2 : unitPrice = (float)45.00 * quantity;
					 break;
			case 3 : unitPrice = (float)55.00 * quantity;
					 break;
			default : printf("Invalid Input!!\n");
					  break;
		}
		
		totalPrice += unitPrice;
		printf("\n");
		
		printf("Enter Item : ");
		scanf("%d" , &itemNo);
	}
	
	//printing the calculation result
	printf("Total Price to Pay : %.2f\n" , totalPrice);
	
	return 0;
}
