#include<stdio.h>

int main (void)
{
	int type = 0 , number , payInput = 0; 
	char size , payType;
	float onePizza , total = 0 , discount , netAmount ;
	
	while(type != -1)
	{
		printf("Input pizza type (1 / 2): ");
		scanf("%d" , &type);
		
		if (type == -1)
		{
			break;
		}
		else if (type < 1 || type > 2)
		{
			printf("Invalid Input!!\n");
			continue;
		}
		
		printf("Input the pizza size (L / M): ");
		scanf("%*c%c" , &size);
		
		if ( !(size == 'L' || size == 'M') )
		{
			printf("Invalid Input!!\n");
			continue;
		}
		
		printf("Input the number of pizzas : ");
		scanf("%d" , &number);
		
		if (type == 1)
		{
			if (size == 'L')
			{
				onePizza = 1720.0 * number;
			}
			else if (size == 'M')
			{
				onePizza = 975.0 * number;
			}
		}
		else if (type == 2)
		{
			if (size == 'L')
			{
				onePizza = 1820.0 * number;
			}
			else if (size == 'M')
			{
				onePizza = 1000.0 * number;
			}
		}
		total += onePizza;
		printf("\n");
	}
	printf("\n");
	
	printf("Are you paying by credit card (Y / N) : ");
	scanf("%*c%c" , &payType);
	
	if (payType == 'Y' && payInput == 0)
	{
		discount = total * 20.0 / 100;
		payInput++;
	}
	
	printf("Are you a loyalty customer (Y / N) : ");
	scanf("%*c%c" , &payType);
	
	if (payType == 'Y' && payInput == 0)
	{
		discount = total * 15.0 / 100;
		payInput++;
	}
	
	printf("Are you a loyalty customer (Y / N) : ");
	scanf("%*c%c" , &payType);
	
	if (payType == 'Y' && payInput == 0)
	{
		discount = total * 5.0 / 100;
		payInput++;
	}
	printf("\n");
	netAmount = total - discount;
	
	printf("Total Bill Amount : %.2f\n" , total);
	printf("Discount : %.2f\n" , discount);
	printf("Net amount : %.2f\n" , netAmount);
	
	return 0;
}
