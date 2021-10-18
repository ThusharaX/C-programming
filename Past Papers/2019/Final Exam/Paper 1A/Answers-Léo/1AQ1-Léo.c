#include <stdio.h>

int main ()
{
	int pizzaType=0,amount;
	char size,cred,loy,on;
	float cost=0,discount=0,net=0;
	
	
	printf("Input Pizza type (1/2):");
	scanf("%d%*c",&pizzaType);
		
	while(pizzaType != -1)
	{
		
		if((pizzaType !=1) && (pizzaType !=2) )
		{
			printf("Invalid Pizza Type, try again later...\n");
			return 0;
		}
		
		printf("Input Pizza size (L/M):");
		scanf("%c",&size);
		
		if((size !='L') && (size !='M') )
		{
			printf("Invalid Pizza Size, try again later...\n");
			return 0;
		}
		
		printf("Input Number of Pizzas:");
		scanf("%d",&amount);
		
		if(pizzaType == 1)
		{
			if(size == 'L')
			{
				cost += (1720.00*amount);
			}
			else
			{
				cost += (975.00*amount);
			}
		}
		else 
		{
			if(size == 'L')
			{
				cost += (1820.00*amount);
			}
			else
			{
				cost += (1000.00*amount);
			}
		}
		printf("\nInput Pizza type (1/2):");
		scanf("%d%*c",&pizzaType);
		
	}
	
	printf("\nAre you paying by credit card (Y/N)?");
	scanf("%c%*c",&cred);
	
	printf("Are you a loyalty customer (Y/N)?");
	scanf("%c%*c",&loy);
	
	printf("Is this an online order (Y/N)?");
	scanf("%c",&on);
	
	if(cred == 'Y')
	{
		discount += (cost*0.2);
	}
	else if(loy=='Y')
	{
		discount += (cost*0.15);
		
	}
	else if(on == 'Y')
	{
		discount += (cost*0.05);		
	}
	else
	{
		discount =0;
	}
	
	net += (cost-discount);
	
	printf("\nTotal bill amount: %.2f",cost);
	printf("\nDiscount: %.2f",discount);
	printf("\nNet Amount: %.2f",net);
	
}
