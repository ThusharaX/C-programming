//deascending check

#include<stdio.h>

int main (void)
{
	//declaring array
	int input[6];
	
	//declaring variavle
	int i;
	
	//taking inputs from the user
	for(i = 0 ; i < 6 ; i++)
	{
		printf("Enter a Number : ");
		scanf("%d" , &input[i]);
	}
	
	//check if the input sequence in ascending
	for(i = 1 ; i < 6 ; i++)
	{
		if (input[i] > input[i - 1])
		{
			printf("Numbers are not stored in deascending order.\n");
			return -1;
		}
	}
	
	printf("Numbers are stored in deascending order.\n");
	return 0;
	
	return 0;
}
