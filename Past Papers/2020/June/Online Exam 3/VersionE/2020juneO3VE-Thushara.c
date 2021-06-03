/* 2020 June
 * Online Exam 3
 * Version E
 */ 

#include<stdio.h>

// size of an array
# define SIZE 6

// main function
int main(void)
{
	double price[SIZE] = {0}; // price array
	double priceOfBook = 0; // price enterd by user 
	int count = 0; // counter control variable
	
	// begin for loop
	for (count = 1; count <= SIZE; ) {
		
		// user input for price
		printf("Input the price of book %d :", count); // prompt for input
		scanf("%lf", &priceOfBook);
		
		// check if sale is a negative value or 0
		if (priceOfBook <= 0) {
			printf("Please re-enter the amount\n");
			continue;
		} // end if
		
		// reduce 10% from priceOfBook
		priceOfBook -= priceOfBook * 10 / 100;
		
		// store priceOfBook in to price array
		price[count - 1] = priceOfBook;
		count++;
	}
	
	// printing array
	printf("\nBook ID\t\tPrice\n");
	for (count = 1; count <= SIZE; count++) {
		printf("%d\t\t%.2f\n", count, price[count - 1]);
	}
	
	return 0;
}
