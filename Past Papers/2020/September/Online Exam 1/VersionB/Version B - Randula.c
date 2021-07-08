#include<stdio.h>

int main (void)
{
	//declaring variables
	int roomOption , noOfGuests , noOfDays , addTourOpt;
	char addTour;
	float totalPrice = 0 , addPrice = 0 , roomPrice;
	
	//taking user inputs for room option
	printf("Input Room Option : ");
	scanf("%d" , &roomOption);
	
	//taking inputs for Number of Guests
	printf("Number of Guests : ");
	scanf("%d" , &noOfGuests);
	
	//taking inputs for Number of Days
	printf("Number of Day : ");
	scanf("%d" , &noOfDays);
	
	//taking user inputs for additional tour and option
	printf("Do you need any additional Tours (Y/N) : ");
	scanf("%*c%c" , &addTour);
	
	//initiating sentinal loop
	while (addTour != 'N' && addTour != 'n')
	{
		//taking user inputs for additional Option
		printf(" Input your option : ");
		scanf("%d" , &addTourOpt);
		
		//calculating additional Price
		if (addTourOpt == 1)
		{
			addPrice += (float) (3500.00 * noOfGuests);
		}
		else if (addTourOpt == 2)
		{
			addPrice += (float) (1000.00 * noOfGuests);
		}
		else if (addTourOpt == 3)
		{
			addPrice += (float) (1500.00 * noOfGuests);
		}
		else if (addTourOpt == 4)
		{
			addPrice += (float) (2000.00 * noOfGuests);
		}
		//taking user inputs for additional tour and option
		printf("Do you need any additional Tours (Y/N) : ");
		scanf("%*c%c" , &addTour);
	}
	//printf("%.2f\n" , addPrice);
	
	//calculate the total price
	if (roomOption == 1)
	{
		if (noOfGuests <= 2)
		{
			roomPrice = 45000.00;
		}
		else if (noOfGuests <= 5)
		{
			roomPrice = 44000.00;
		}
		else
		{
			roomPrice = 43000.00;
		}
	}
	else if (roomOption == 2)
	{
		if (noOfGuests <= 2)
		{
			roomPrice = 40000.00;
		}
		else if (noOfGuests <= 5)
		{
			roomPrice = 38000.00;
		}
		else
		{
			roomPrice = 35000.00;
		}
	}
	else if (roomOption == 3)
	{
		if (noOfGuests <= 2)
		{
			roomPrice = 37500.00;
		}
		else if (noOfGuests <= 5)
		{
			roomPrice = 35000.00;
		}
		else
		{
			roomPrice = 32000.00;
		}
	}
	totalPrice = (float)roomPrice * noOfGuests * noOfDays;
	totalPrice += addPrice;
	
	//display the total price
	printf(" Total Price : %.2f\n" , totalPrice);
	
	return 0;
}
