/* 2020 June
 * Online Exam 3
 * Version D
 */ 

#include<stdio.h>

// size of an array
# define SIZE 5

// main function
int main(void)
{
	double sales[SIZE] = {0}; // sales array
	double sale = 0; // sales enterd by user 
	int count; // counter control variable
	
	// begin for loop
	for (count =1; count <= SIZE; ) {
		
		// user input for sale
		printf("Input the sales of salesmen %d :", count); // prompt for input
		scanf("%lf", &sale);
		
		// check if sale is a negative value
		if (sale < 0) {
			
			// invalid sale error message
			printf("Please re-enter the amount\n");
			continue;
		} // end if
		
		// store sale in to sales array
		sales[count - 1] = sale;
		count++;
	}
	
	// printing array
	printf("\nSales person number\tSales amount\n");
	for (count = 1; count <= SIZE; count++) {
		if (sales[count - 1] > 20000.00) {
			printf("%d\t\t\t%.2f\n", count, sales[count - 1]);
		}
	}
	
	return 0;
}
