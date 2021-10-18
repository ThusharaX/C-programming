#include<stdio.h>

int main (void)
{
	//declare variables
	int type , quantity;
	float totalPrice;
	
	//take user input until user enters other than 1 , 2 or 3 to type
	printf("Enter Burger Type : ");
	scanf("%d" , &type);
	
	//calculate and retake inputs
	while(type == 1 || type == 2 || type == 3)
	{
		printf("Enter Quantity : ");
		scanf("%d" , &quantity);
		
		switch (type)
		{
			case 1 : totalPrice = (float)500.00 * quantity;
					 break;
			case 2 : totalPrice = (float)550.00 * quantity;
					 break;
			case 3 : totalPrice = (float)600.00 * quantity;
					 break;
		}
		printf("Total Price : %.2f\n" , totalPrice);
		printf("\n");
		
		printf("Enter Burger Type : ");
		scanf("%d" , &type);
	}
	
	return 0;
}
