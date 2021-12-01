#include<stdio.h>

int main()
{
	//declare variables
	int age;
	float balance;
	
	//take user inputs
	printf("Age : ");
	scanf("%d" , &age);
	
	printf("Bank Balance : ");
	scanf("%f" , &balance);
	
	//display the gift
	printf("Gift : ");
	if (age > 18)
	{
		if (balance > 100000)
		{
			printf("Rice Cooker\n");
		}
		else
		{
			printf("Travelling Bag\n");
		}
	}
	else
	{
		if (balance > 100000)
		{
			printf("Tablet\n");
		}
		else
		{
			printf("School Bag\n");
		}
	}
	
	return 0;
}
