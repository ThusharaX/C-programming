#include<stdio.h>

int main()
{
	//declare variables
	int timeP , noOfTimes;
	char pTime;
	float amount , peakPrice;
	
	//take user inputs
	printf("Time period : ");
	scanf("%d" , &timeP);
	
	printf("Number of times : ");
	scanf("%d" , &noOfTimes);
	
	printf("Peak Time(Y/N) : ");
	scanf("%*c%c" , &pTime);
	
	//calculate the amount
	if (timeP > 60)
	{
		amount = (float)25000 * noOfTimes;
	}
	else if (timeP >= 45)
	{
		amount = (float)12000 * noOfTimes;
	}
	else
	{
		amount = (float)75000 * noOfTimes;
	}
	
	if (pTime == 'Y' || pTime == 'y')
	{
		peakPrice = (float) 20 / 100;
	}
	else if (pTime == 'N' || pTime == 'n')
	{
		peakPrice = 0;
	}
	else
	{
		printf("Invalid Input!\n");
		return -1;
	}
	
	amount += peakPrice;
	
	//display total amount
	printf("Total amount to be paid : %.2f\n" , amount);
	
	return 0;
}
