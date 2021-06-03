#include<stdio.h>
int main()
{
	int pizzaType, noOfPizzas;
	float cost, billAmount, netAmount, discount;
	char size, response1, response2, response3;
	
	billAmount = 0;
	
	while(pizzaType != -1)
	{
		printf("Input pizza type(1/2): ");
		scanf("%d%*c", &pizzaType);
		
		if(pizzaType == -1)
			break;
			
		while(pizzaType != 1 && pizzaType != 2)
		{
			printf("Invalid Input!\nInput pizza type(1/2): ");
			scanf("%d%*c", &pizzaType);
			
			if(pizzaType == -1)
			break;
		}
		
		printf("Input pizza size(M/L): ");
		scanf("%c%*c", &size);
		
		while(size != 'L' && size != 'M')
		{
			printf("Invalid Input!\nInput pizza size(M/L): ");
			scanf("%c%*c", &size);
		}
			
		printf("Input number of pizzas: ");
		scanf("%d", &noOfPizzas);
		
		if (pizzaType == 1 && size == 'M')
		{
			cost = noOfPizzas * 975.0;
			billAmount += cost;
		}
		if (pizzaType == 1 && size == 'L')
		{
			cost = noOfPizzas * 1720.0;
			billAmount += cost;
		}
		if (pizzaType == 2 && size == 'M')
		{
			cost = noOfPizzas * 1000.0;
			billAmount += cost;
		}
		if (pizzaType == 2 && size == 'L')
		{
			cost = noOfPizzas * 1820.0;
			billAmount += cost;
		}
		printf("\n");
	}
	
	printf("\nAre you paying by credit card(Y/N): ");
	scanf("%c%*c", &response1);
	printf("Are you a loyalty customer(Y/N): ");
	scanf("%c%*c", &response2);
	printf("Is this an online order(Y/N): ");
	scanf("%c", &response3);
	
	if(response1 == 'Y')
	{
		discount = billAmount * 20 / 100.0;
		netAmount = billAmount - discount;
	}
	else if(response1 == 'N')
	{
		if(response2 == 'Y')
		{
			discount = billAmount * 15 / 100.0;
			netAmount = billAmount - discount;
		}
		else if(response2 == 'N')
		{
			if(response3 == 'Y')
			{
				discount = billAmount * 5 / 100.0;
				netAmount = billAmount - discount;
			}
			else if(response3 == 'N')
			{
				discount = 0;
				netAmount = billAmount - discount;
			}
		}
	}
	
	printf("\nTotal bill amount: %.2f", billAmount);
	printf("\nDiscount: %.2f", discount);
	printf("\nNet amount: %.2f", netAmount);
	
	return 0;
}
