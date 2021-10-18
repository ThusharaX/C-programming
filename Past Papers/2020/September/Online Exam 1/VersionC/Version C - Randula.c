#include<stdio.h>

int main (void)
{
	//declating variables
	int pizzaOption , noOfPizzas , extraOption;
	char sizeOfPizza , needTopping;
	float totalPrice = 0 , extraPrice = 0, pizzaPrice = 0;
	
	//taking inputs for pizza type
	printf("Input Pizza Option : ");
	scanf("%d" , &pizzaOption);
	
	//taking inputs for size of the pizza
	printf("Size of the Pizza (P / M / L) : ");
	scanf("%*c%c" , &sizeOfPizza);
	
	//taking inputs for Number of Pizzas
	printf("Number of Pizzas : ");
	scanf("%d" , &noOfPizzas);
	
	//asking from the user if the user needs extra toppings 
	printf("Do you need any extra toppings (y / n) : ");
	scanf("%*c%c" , &needTopping);
	
	//initiating sentinal loop
	while (needTopping != 'N' && needTopping != 'n')
	{
		//asking from the user what topping does the user needs
		printf(" Input your Option : ");
		scanf("%d" , &extraOption);
		
		//calculating the price for toppings
		if (extraOption == 1)
		{
			extraPrice += 320.0 * noOfPizzas;
		}
		else if (extraOption == 2)
		{
			extraPrice += 140.0 * noOfPizzas;
		}
		else if (extraOption == 3)
		{
			extraPrice += 130.0 * noOfPizzas;
		}
		else if (extraOption == 4)
		{
			extraPrice += 150.0 * noOfPizzas;
		}
		
		//asking from the user if the user needs extra toppings 
		printf("Do you need any extra toppings (y / n) : ");
		scanf("%*c%c" , &needTopping);
	}
	
	//calculate the prize of the pizza
	if (pizzaOption == 1)
	{
		if (sizeOfPizza == 'P' || sizeOfPizza == 'p')
		{
			pizzaPrice = 560.0 * noOfPizzas;
		}
		if (sizeOfPizza == 'M' || sizeOfPizza == 'm')
		{
			pizzaPrice = 920.0 * noOfPizzas;
		}
		if (sizeOfPizza == 'L' || sizeOfPizza == 'l')
		{
			pizzaPrice = 1800.0 * noOfPizzas;
		}
	}
	else if (pizzaOption == 2)
	{
		if (sizeOfPizza == 'P' || sizeOfPizza == 'p')
		{
			pizzaPrice = 340.0 * noOfPizzas;
		}
		if (sizeOfPizza == 'M' || sizeOfPizza == 'm')
		{
			pizzaPrice = 660.0 * noOfPizzas;
		}
		if (sizeOfPizza == 'L' || sizeOfPizza == 'l')
		{
			pizzaPrice = 1300.0 * noOfPizzas;
		}
	}
	else if (pizzaOption == 3)
	{
		if (sizeOfPizza == 'P' || sizeOfPizza == 'p')
		{
			pizzaPrice = 760.0 * noOfPizzas;
		}
		if (sizeOfPizza == 'M' || sizeOfPizza == 'm')
		{
			pizzaPrice = 1100.0 * noOfPizzas;
		}
		if (sizeOfPizza == 'L' || sizeOfPizza == 'l')
		{
			pizzaPrice = 2100.0 * noOfPizzas;
		}
	}
	
	//calculate and display the total price
	totalPrice = pizzaPrice + extraPrice;
	
	printf(" Total Price Rs : %.2f\n" , totalPrice);
	
	return 0;
}
