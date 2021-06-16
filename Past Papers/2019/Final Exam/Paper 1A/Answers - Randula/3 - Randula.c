#include<stdio.h>
#include<math.h>
#include<assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main (void)
{
	testTotalAmount();
	
	float intRate , amount , total;
	int i;
	
	printf("Enter Initial Amount to be invested : ");
	scanf("%f" , &amount);
	printf("Enter Annual Interest Rate (in percentage) : ");
	scanf("%f" , &intRate);
	
	for (i = 1 ; i <= 5 ; i++)
	{
		total = findTotalAmount(intRate , amount);
		
		printf("Amounr after year %d : %.2f\n" , i , total);
		
		amount = total;
	}
	
	return 0;
}

float calcAnnualInterest(float interestRate, float amount)
{
	if (amount > 1000000)
	{
		interestRate += 0.5;
	}
	
	return amount * interestRate / 100;
}

float findTotalAmount(float interestRate, float amount)//
{
	float interest;
	
	interest = calcAnnualInterest(interestRate, amount);
	
	return interest + amount;
}

void testTotalAmount()
{
	assert(fabs(findTotalAmount(10 , 10000) - 11000) < 0.01);
	assert(fabs(findTotalAmount(10 , 2000000) - 2210000) < 0.01);
	
	printf("Unit tests passed()\n\n");
}
