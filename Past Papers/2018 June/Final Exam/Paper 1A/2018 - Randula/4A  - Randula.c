#include<stdio.h>

int main (void)
{	
	//define strings
	char emp_no[3];
	char name[20];
	//define array
	int status[7] ;
	//define variabele
	int i;
	
	//define file
	FILE *atdPtr;
	atdPtr = fopen("attendance.dat" , "a"); //open attendance.dat file for append
	
	//take inputs from the user
	printf("Enter the Employee Number : ");
	scanf("%s" , emp_no);
	
	printf("Enter the Employee Name : ");
	scanf("%s" , name);
	
	for (i = 0 ; i < 7 ; i++ )
	{
		printf("Enter the attendance of the week for the day %d : " , i + 1);
		scanf("%d" , &status[i]);
		
		if(status[i] != 0 && status[i] != 1) //discard an invalid input and retake
		{
			printf("Invalid Input!! Try Again!!\n");
			i--;
		}
	}
	
	//adding data to the attendance.dat file
	fprintf(atdPtr ,"%s\t%s\t" , emp_no , name);
	for (i = 0 ; i < 7 ; i++)
	{
		fprintf(atdPtr ,"%d " , status[i]);
	}
	
	//close attendance.dat file
	fclose(atdPtr);
	return 0;
}
