#include<stdio.h>

int main (void)
{
	//define stings
	char name[20];
	//define array
	int status[7];
	//define variables
	int i , empNoInput , empNoRead , noOfDays = 0;
	
	//define file
	FILE *atdPtr;
	atdPtr = fopen("attendance.dat" , "r");//open attendance.dat file for read
	
	//taking input from the user
	printf("Enter the Employee Number : ");
	scanf("%d" , &empNoInput);
	
	fscanf(atdPtr , "%d%s" , &empNoRead , name); //taking data from the attendance.dat file
	for(i = 0 ; i < 7 ; i++)
	{
		fscanf(atdPtr , "%d" , &status[i]);//count the employee's attended days
		if(status[i] == 1 )
		{
			noOfDays++;
		}
	}
	while(!feof(atdPtr))
	{
		if (empNoRead == empNoInput)
		{
			printf("%s has reported %d days for this week!\n" , name ,noOfDays); //print the employee's attendance
		}
		noOfDays = 0;
		fscanf(atdPtr , "%d%s" , &empNoRead , name); //taking data from the attendance.dat file
		for(i = 0 ; i < 7 ; i++)
		{
			fscanf(atdPtr , "%d" , &status[i]);//count the employee's attended days
			if(status[i] == 1 )
			{
				noOfDays++;
			}
		}
	}
	
	fclose(atdPtr); //close attendance.dat file
	return 0;
}
