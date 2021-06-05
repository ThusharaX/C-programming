#include <stdio.h>
#include <assert.h>

float calcAnnualInterest (float interestRate,float amount);
float findTotalAmount (float interestRate,float amount);
void testTotalAmount();
int main()
{
	float amount,rt,fin;
	int i;
	testTotalAmount();
	printf("Assertion Passed\n\n");
	
	printf("Input the amount to be invested: ");
	scanf("%f",&amount);
	
	printf("Input Rate: ");
	scanf("%f",&rt);
	
	if(amount>1000000)
	{
		rt += 0.5;
	}
	for(i=1;i<=5;i++)
	{
		fin =findTotalAmount(rt,amount);
		printf("Amount after year %d :  %.2f\n",i,fin);
		
		amount=fin;
	}
}

float calcAnnualInterest (float interestRate,float amount)
{
	
	return (amount * (interestRate/100));
}

float findTotalAmount (float interestRate,float amount)
{
	float x;
	x = calcAnnualInterest(interestRate,amount);
	
	return (x+amount);
	
}
void testTotalAmount ()
{
	assert (findTotalAmount(10,10000)==11000);
}
