#include<stdio.h>

int main (void)
{
	//variables
	int i , j , letter;
	
	//for loop for rows
	for(i = 1 ; i <= 5 ; i++)
	{
		//for loop for colunms
		for (j = 1 ; j <= i ; j++)
		{
			printf("%c" , 97 + i - 1); //print the letters
		}
		printf("\n");
	}
	
	
	return 0;
}
