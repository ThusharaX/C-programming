#include <stdio.h>

//function main begins program execution
int main(void)
{
	//declaring variables
	char peakTime;
	int timePeriod, noOfTimes;
	float additional, totalAmount, charges;
	
	//taking time period of the advertisement as the user input
	printf("Time period ( in seconds ): ");
	scanf("%d", &timePeriod);
	
	//taking the number of times the advertisement broadcasted as the user input
	printf("Number of Times: ");
	scanf("%d", &noOfTimes);
	
	//asking if the advertisement broadcasted during the peal time or not
	printf("Peak Time ( Y / N ): ");
	scanf("%*c%c", &peakTime);
	
	//deciding and calculating the total amount to be paid
	if( timePeriod < 45 )
	{
		charges = (float)7500 * noOfTimes;
	}
	else if( 45 <= timePeriod <= 60 )
	{
		charges = (float)12000 * noOfTimes;
	}
	else
	{
		charges = (float)25000 * noOfTimes;
	}
	
	if( peakTime == 'Y' || peakTime == 'y' )
	{
		additional = charges * 0.2;
	}
	else
	{
		additional = 0;
	}
	
	totalAmount = charges + additional;
	
	
	//displaying the total amount to be paid
	printf("Total amount to be paid: %.2f", totalAmount);
	
	return 0;

} //end function main
