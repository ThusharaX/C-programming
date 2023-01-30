#include<stdio.h>

int main()
{	
	float balance, annualInterest, newBalance;
	
	printf("Enter Account Balance : ");
	scanf("%f", &balance);
	
	annualInterest = balance * 10 / 100;
	printf("Annual interest : %.2f\n", annualInterest);
	
	newBalance = balance + annualInterest;
	printf("New Balance : %.2f", newBalance);
	
	return 0;
}
