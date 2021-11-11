#include<stdio.h>

int main (void)
{
	//declare variables
	int type , quantity;
	float totalPrice = 0 , unitPrice ,  discount;
	
	//taking user inputs until -1 for pizza type
	printf("Enter Pizza Type : ");
	scanf("%d" , &type);
	
	while(type != -1)
	{
		discount = 0;
		unitPrice = 0;
		
		printf("Enter Quantity : ");
		scanf("%d" , &quantity);
		
		//calculation of total and discount
		switch (type)
		{
			case 1 : unitPrice = 1000.00 * quantity;
				 	 if (quantity > 3)
					 {
						discount = unitPrice * 10.0 / 100;
					 }
					 break;
			case 2 : unitPrice = 1600.00 * quantity;
				 	 if (quantity > 3)
					 {
						discount = unitPrice * 12.0 / 100;
					 }
					 break;
			case 3 : unitPrice = 1400.00 * quantity;
				 	 if (quantity > 3)
					 {
						discount = unitPrice * 15.0 / 100;
					 }
					 break;
			default : printf("Invalid Type Input!!\n");
					 break;
		}
		totalPrice = unitPrice - discount;
		
		printf("Total Price : %.2f\n" , totalPrice);
		printf("\n");
		
		printf("Enter Pizza Type : ");
		scanf("%d" , &type);
	}
	
	
	return 0;
}
