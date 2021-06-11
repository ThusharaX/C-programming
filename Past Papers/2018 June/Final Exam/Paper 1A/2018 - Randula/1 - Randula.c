#include<stdio.h>

int main (void)
{
	//define variables
	char type;
	float total_h  = 0 , total_m = 0 , total_f = 0 , total = 0;
	int amount_h = 0, amount_m = 0 , amount_f = 0 , i , invalid = 0;
	
	//for loop for take inputs 100 time
	for (i = 1 ; i <= 100 ; i++)
	{
		if(i > 1 || invalid == 1)
		{
			scanf("%*c");
		}
		
		printf("Enter the course type of the student number %d (H or M or F): " , i);
		scanf("%c" , &type);
		
		//increment relevent variable by user input
		if(type == 'H' || type == 'h')
		{
			amount_h++;
		}
		else if(type == 'M' || type == 'm')
		{
			amount_m++;
		}
		else if(type == 'F' || type == 'f')
		{
			amount_f++;
		}
		else
		{
			printf("Invalid input!!\n");
			i--;
			invalid = 1;
		}
	}
	//earning calculation
	total_h = (float)amount_h * 1500;
	total_m = (float)amount_m * 2000;
	total_f = (float)amount_f * 2500;
	
	//printing the earnings
	printf("Course\t\t\t\t\tNumber of Students\tTotal Registration Fee\n");
	printf("Diploma in Hospitality Management\t%d%31.2f\n" , amount_h , total_h);
	printf("Diploma in Marketing %20d %30.2f\n" , amount_m , total_m);
	printf("Diploma in Finance %22d %30.2f\n" , amount_f , total_f);
	
	return 0;
}
