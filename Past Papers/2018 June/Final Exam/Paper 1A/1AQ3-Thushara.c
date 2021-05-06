/* Final Paper 2018
*  Question 3
*/

// including header files
#include<stdio.h>
#include<assert.h>
#include<math.h>

// function prototype
float calDiscount(int time, float totAmount);
void testCalDiscount();
void displayGift(float finalTot);

// main function
int main(void) {
	
	// declaring variables
	float finalTot, discount, totAmount;
	int time;
	
	testCalDiscount();
	
	printf("Enter time : ");
	scanf("%d", &time);
	
	if (time < 0 || time > 23 ) {
		printf("Invalid time!");
		return -1;
	}
	
	printf("Enter total amount : ");
	scanf("%f", &totAmount);
	
	discount = calDiscount(time, totAmount);
	finalTot = totAmount - discount;
	
	printf("\nFinal amount : %.2f\n", finalTot);
	displayGift(finalTot);
	
	return 0;	
}

// function defintion
float calDiscount(int time, float totAmount) {
	float discount;
	
	if (time > 16 && time < 19) {
		if (totAmount >= 5000)
			discount = totAmount * 10 / 100;
		else if (totAmount >= 2500) {
			discount = totAmount * 7 / 100;
		} 
	}
	else if (time > 20 && time < 22) {
		if (totAmount >= 5000)
			discount = totAmount * 12 / 100;
		else if (totAmount >= 2500) {
			discount = totAmount * 9 / 100;
		}
	}
	
	return discount;
}

void testCalDiscount() {
	assert(fabs(calDiscount(17.30, 6000.00) - 600) < 1);
	assert(fabs(calDiscount(21.30, 3000.00) - 270) < 1);
}

void displayGift(float finalTot) {
	if (finalTot >= 7000)
		printf("Gift : Packet of Milk\n");
	else if (finalTot >= 5000)
		printf("Gift : 1kg of Sugar\n");
	else if (finalTot >= 3000)
		printf("Gift : Pack of 6 Eggs\n");
	else {
		printf("No Gift\n");
	}
}






