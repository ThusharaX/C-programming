//importing libraries
#include<stdio.h>

int main(void)
{
	//define array
	int salaryRange[9];
	//define variables
	int input = 0 , empNo = 1;
	int value , i;
	
	//assign all the elements in the array to 0
	for (i = 0 ; i < 9 ; i++)
	{
		salaryRange[i] = 0;
	}
	
	//using the sentinal loop for check whether the input it -1
	while(input != -1)
	{
		printf("Enter the Salary of the Employee No %d : " , empNo); //prompt
		scanf("%d" , &input);
		
		//selection sta
		if(input < -1 || input > 1500 || input < 200)
		{
			printf("Invalid Input!!\n");
		}
		else if (input == -1)
		{
			break;
		}
		else
		{	//incrimenting the relevant array by the input
			empNo++;
			if (input > 1000)
			{
				salaryRange[8]++;
			}
			else
			{
				input /= 100;
				salaryRange[input - 2]++; 
			}
		}
	}
	printf("\n");
	value = 200;
	
	//printing final data
	printf("Total Number of %d Employees' Salary Details are below!!\n" , empNo - 1);
	for (i = 0 ; i < 8 ; i++)
	{
		printf("Group %c ($%d - $%d) : %d\n" ,  97 + i , value , value + 99 ,salaryRange[i]);
		value += 100;
	}
	printf("Group %c ($1000 and above ) : %d\n" ,  97 + i ,salaryRange[i]);
	
	return 0;
}
