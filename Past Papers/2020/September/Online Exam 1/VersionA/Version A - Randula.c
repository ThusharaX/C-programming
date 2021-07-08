#include<stdio.h>

int main (void)
{
	//declaring variables
	int typeOfRoom = 0, noOfDays;
	char accBasis , cardType;
	float amount , discount;
	
	
	//initiating sentinal controlled loop
	while (typeOfRoom != -1)
	{
		//taking user inputs for the room type
		printf("Enter Type of Room : ");
		scanf("%d" , &typeOfRoom);
		
		//checking if the user enters an invalid input or -1
		if (typeOfRoom == -1)
		{
			break;
		}
		else if (typeOfRoom != 1 && typeOfRoom != 2 && typeOfRoom != 3)
		{
			printf("Invalid Type of Room!!\n");
			continue;
		}
	
		//initiating amount to 0
		amount = 0;
		
		//taking user inputs for Accomodation Basis
		printf("Enter Accommodation Basis (F/H) : ");
		scanf("%*c%c" , &accBasis);
		
		//taking user inputs for No of Days
		printf("Enter No of Days : ");
		scanf("%d" , &noOfDays);
		
		//taking user inputs for Reward Card Type
		printf("Enter Reward Card Type : ");
		scanf("%*c%c" , &cardType);
		
		//calculate the amount
		if (typeOfRoom == 1)
		{
			if (accBasis == 'F' || accBasis == 'f')
			{
				amount = 25555.00;
			}
			else if (accBasis == 'H' || accBasis == 'h')
			{
				amount = 17250.00;
			}
		}
		else if (typeOfRoom == 2)
		{
			if (accBasis == 'F' || accBasis == 'f')
			{
				amount = 17500.00;
			}
			else if (accBasis == 'H' || accBasis == 'h')
			{
				amount = 12250.00;
			}
		}
		else if (typeOfRoom == 3)
		{
			if (accBasis == 'F' || accBasis == 'f')
			{
				amount = 9000.00;
			}
			else if (accBasis == 'H' || accBasis == 'h')
			{
				amount = 7250.00;
			}
		}
		
		amount *= (float) noOfDays;
		
		if (cardType == 'G' || cardType == 'g')
		{
			discount = amount * 12.5 / 100;
		}
		else if (cardType == 'B' || cardType == 'b')
		{
			discount = amount * 11.5 / 100;
		}
		else if (cardType == 'B' || cardType == 'b')
		{
			discount = amount * 9.5 / 100;
		}
		
		amount -= discount;
		
		//display the amount
		printf("Amount (Rs.) : %.2f\n" , amount);
		printf("\n");
	}
	
	return 0;
}
