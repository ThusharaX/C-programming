#include<stdio.h>
#include<assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main()
{
	int i;
	float amountInput, interestRateInput;
	
	testTotalAmount();
	
	printf("Enter Initial Amount to be invested: ");
	scanf("%f", &amountInput);
	printf("Enter Annual interest Rate(in percentage): ");
	scanf("%f", &interestRateInput);
	
	printf("\n");
	for(i=1; i<=5; ++i)
	{
		printf("Amount after year %d: %.2f\n", i, findTotalAmount(interestRateInput, amountInput));
		amountInput = findTotalAmount(interestRateInput, amountInput);
	}
	
	return 0;
}
float calcAnnualInterest(float interestRate, float amount)
{
	if (amount > 1000000)
		return amount * (interestRate + 0.5) / 100.0;
	else
		return amount * interestRate / 100.0;
}
float findTotalAmount(float interestRate, float amount)
{
	return calcAnnualInterest(interestRate, amount) + amount;
}
void testTotalAmount()
{
	assert(calcAnnualInterest(10, 10000) + 10000 == 11000);
	assert(calcAnnualInterest(10, 11000) + 11000 == 12100);
	assert(calcAnnualInterest(10, 12100) + 12100 == 13310);
	
	printf("testTotalAmount() unit tests passed.\n");
}
