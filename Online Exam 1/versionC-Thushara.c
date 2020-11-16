#include<stdio.h>

// Online Test1 - Version C

// main function
int main()
{	
	// variable declaration
	int pizzaOption, numberOfPizza, toppingOption;
	char sizeOfPizza, extraToppings = 'y';
	float total = 0;
	
    printf("Input Pizza Option : ");
    scanf("%d", &pizzaOption);					// input Pizza Option
    printf("Size of the Pizza ( P/M/L) : ");
    scanf(" %c", &sizeOfPizza);					// input Size of Pizza
    printf("Number of Pizzas : ");
    scanf("%d", &numberOfPizza);				// input Number of Pizza
    
    // calculating total with pizza option and number of pizzas
    if (pizzaOption == 1) {
    	switch (sizeOfPizza) {
    		case 'P' : total += numberOfPizza * 560.00;
    		break;
    		case 'M' : total += numberOfPizza * 920.00;
    		break;
    		case 'L' : total += numberOfPizza * 1800.00;
    		break;
    		default : printf("invalid Size\n");
		}
	}
	
	else if (pizzaOption == 2) {
    	switch (sizeOfPizza) {
    		case 'P' : total += numberOfPizza * 340.00;
    		break;
    		case 'M' : total += numberOfPizza * 660.00;
    		break;
    		case 'L' : total += numberOfPizza * 1300.00;
    		break;
    		default : printf("invalid Size\n");
		}
	}
	
	else if (pizzaOption == 3) {
    	switch (sizeOfPizza) {
    		case 'P' : total += numberOfPizza * 760.00;
    		break;
    		case 'M' : total += numberOfPizza * 1100.00;
    		break;
    		case 'L' : total += numberOfPizza * 2100.00;
    		break;
    		default : printf("invalid Size\n");
		}
	}
	
	else {
		printf("invalid Option\n");
		return 0;
	}
    
    // calculating total with adding toppings
    while (extraToppings == 'y' || extraToppings == 'Y') {
    	printf("Do you need any extra toppings ( y/n) : ");
    	scanf(" %c", &extraToppings);							// input Topping Option
    	
    	if (extraToppings == 'y' || extraToppings == 'Y'){
    		printf("\tInput your option : ");
    		scanf("%d", &toppingOption);
    	
    		switch (toppingOption) {
    			case 1 : total += 320.00;
    			break;
    			case 2 : total += 140.00;
    			break;
    			case 3 : total += 130.00;
    			break;
    			case 4 : total += 150.00;
    			break;
    			default : printf("invalid Option\n");
			}
    	}
    	else if (extraToppings == 'n'|| extraToppings == 'N') {
    		break;
		}
		else {
			printf("invalid Choice\n\n");
			continue;
		}
	}
	
	// Printing Total Price
	printf("\nTotal Price Rs : %.2f", total);

    return 0;
}
