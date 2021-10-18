#include<stdio.h>

int main (void)
{
	//declaring variables
	int airlineOption , noOfSeats , extraOption;
	char classType , needExtraOption;
	float airplanePrice = 0 , extraPrice = 0 , totalPrice = 0 ;
	
	//taking user inputs about Airline Option
	printf("Input Airline Option : ");
	scanf("%d" , &airlineOption);
	
	//taking user inputs about Class Type
	printf("Class Type ( E / B ) : ");
	scanf("%*c%c" , &classType);
	
	//initiating while loop for error checking
	while( classType != 'E' && classType != 'B' && classType != 'e' && classType != 'b')
	{
		printf("Invalid Input\n");
		
		//taking user inputs about Class Type
		printf("Class Type ( E / B ) : ");
		scanf("%*c%c" , &classType);
	}
	
	//taking user inputs about number of seats
	printf("Number of Seats : ");
	scanf("%d" , &noOfSeats);
	
	//taking user inputs whether if the user need an extra option
	printf("Do you Need any extra services ( y / n ) : ");
	scanf("%*c%c" , &needExtraOption);
	
	//initiating while loop for error checking
	while (needExtraOption != 'N' && needExtraOption != 'n' && needExtraOption != 'Y' && needExtraOption != 'y')
	{
		printf("Invalid Input\n");
		
		//taking user inputs whether if the user need an extra option
		printf("Do you Need any extra services ( y / n ) : ");
		scanf("%*c%c" , &needExtraOption);
	}
	
	//intiating the sentinal loop for extra options
	while (needExtraOption != 'N' && needExtraOption != 'n')
	{
		//taking user inputs about the extra option
		printf(" Input your option : ");
		scanf("%d" , &extraOption);
		
		//calculating the price for extra option
		if (extraOption == 1)
		{
			extraPrice += 7800 * noOfSeats;
		}
		else if (extraOption == 2)
		{
			extraPrice += 1500 * noOfSeats;
		}
		else if (extraOption == 3)
		{
			extraPrice += 19500 * noOfSeats;
		}
		else if (extraOption == 4)
		{
			extraPrice += 2000 * noOfSeats;
		}
		
		//taking user inputs whether if the user need an extra option
		printf("Do you Need any extra services ( y / n ) : ");
		scanf("%*c%c" , &needExtraOption);
		
		//initiating while loop for error checking
		while (needExtraOption != 'N' && needExtraOption != 'n' && needExtraOption != 'Y' && needExtraOption != 'y')
		{
			printf("Invalid Input\n");
		
			//taking user inputs whether if the user need an extra option
			printf("Do you Need any extra services ( y / n ) : ");
			scanf("%*c%c" , &needExtraOption);
		}
	}
	
	//calculating the price for the airplane
	if (airlineOption == 1)
	{
		if (classType == 'E' || classType == 'e')
		{
			airplanePrice += 36500.00 * noOfSeats;
			
		}
		else if (classType == 'B' || classType == 'b')
		{
			airplanePrice += 77600.00 * noOfSeats;
			
		}
	}
	else if (airlineOption == 2)
	{
		if (classType == 'E' || classType == 'e')
		{
			airplanePrice += 38500.00 * noOfSeats;
			
		}
		else if (classType == 'B' || classType == 'b')
		{
			airplanePrice += 76500.00 * noOfSeats;
			
		}
	}
	else if (airlineOption == 3)
	{
		if (classType == 'E' || classType == 'e')
		{
			airplanePrice += 54600.00 * noOfSeats;
			
		}
		else if (classType == 'B' || classType == 'b')
		{
			airplanePrice += 84700.00 * noOfSeats;
			
		}
	}
	else if (airlineOption == 4)
	{
		if (classType == 'E' || classType == 'e')
		{
			airplanePrice += 28500.00 * noOfSeats;
			
		}
		else if (classType == 'B' || classType == 'b')
		{
			airplanePrice += 42800.00 * noOfSeats;
			
		}
	}
	
	//calculate and display the final amount
	totalPrice = airplanePrice + extraPrice;
	
	printf(" Total Price : %.2f\n" , totalPrice);
	
	
	return 0;
}
