#include<stdio.h>
#include<assert.h>

float calDiscount (int time, float totAmount);
void testCalDiscount();
void displayGift(float finalTot);
int main()
{
	int inputTime;
	float inputTotAmount, inputFinalTot;
	
	testCalDiscount();
	
	printf("Enter time: ");
	scanf("%d", &inputTime);
	
	printf("Enter the total amount: ");
	scanf("%f", &inputTotAmount);
	
	inputFinalTot = inputTotAmount - calDiscount(inputTime, inputTotAmount);
	
	printf("Final amount: %.2f", inputFinalTot);
	
	displayGift(inputFinalTot);
	
	return 0;
}
float calDiscount (int time, float totAmount)
{
	if (time >= 16 && time < 20 && totAmount >= 5000)
		return totAmount * 10 / 100.0;
	else if (time >= 16 && time < 20 && totAmount >= 2500 && totAmount < 5000)
		return totAmount * 7 / 100.0;
	else if (time >= 20 && time < 22 && totAmount >= 5000)
		return totAmount * 12 / 100.0;
	else if (time >= 20 && time < 22 && totAmount >= 2500 && totAmount < 5000)
		return totAmount * 9 / 100.0;
	else
		return 0;
}
void testCalDiscount()
{
	assert(calDiscount (12, 5000) == 0);
	assert(calDiscount (16, 5000) == 500);
	
	printf("testCalDiscount() unit tests passed.\n");
}
void displayGift(float finalTot)
{
	if (finalTot >= 7000)
		printf(" (Packet of Milk)");
	
	if (finalTot <= 6999 && finalTot >= 5000)
		printf(" (1kg of Sugar)");
	
	if (finalTot <= 4999 && finalTot >= 3000)
		printf(" (Pack of 6 Eggs)");
	
	if (finalTot < 3000)
		printf(" (No Gift)");
}
