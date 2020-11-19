/* Final Paper 2019
*  Question 3
*/

// including header files
#include<stdio.h>
#include<assert.h>

// function prototype
float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

// main function
int main() {
	
	// declaring variables
	float amount, interestRate, totalAmount;
	int year;
	
	// debug function call
	testTotalAmount();
	
	// input amount & interestRate
	printf("Enter Initial Amount to be invested\t\t: ");
	scanf("%f", &amount);
	printf("Enter Annual interest Rate(in percentage)\t: ");
	scanf("%f", &interestRate);
	
	// printing amount for 5 years
	for (year = 1; year <= 5; year++) {
		// function call
		totalAmount = findTotalAmount(interestRate, amount);
		printf("Amount after year %d\t: %.2f\n", year, totalAmount);
		
		// investing amount for the next year
		amount = totalAmount;
	}
	
	return 0;
}

// function definition
float calcAnnualInterest(float interestRate, float amount) {
	float interest;
	
	interest = amount * interestRate / 100;
	
	return interest;
}

float findTotalAmount(float interestRate, float amount) {
	float totalAmount;
	
	// checking if amount > 1000000.00
	if (amount > 1000000.00) {
		interestRate += 0.5;
	}
	
	// function call
	totalAmount = calcAnnualInterest(interestRate, amount) + amount;
	
	return totalAmount;
}

// debug function
void testTotalAmount() {
	assert(findTotalAmount(10, 1000) == 1100);
	assert(findTotalAmount(20, 2000000) == 2410000.00);
}



