#include<stdio.h>

int main (void)
{
	//declaring variables
	int players , score , totalScore = 0 , playerNo;
	int maxScore = 0 , maxPlayerNo , i , j;
	
	//taking user input - number of players
	printf("Input Number of Players : ");
	scanf("%d" , &players);
	
	printf("\n");
	//taking details of the players and do the calculations
	for (i = 0 ; i < players ; i++)
	{
		totalScore = 0;
		
		printf("Input Player Number : ");
		scanf("%d" , &playerNo);
		
		for (j = 0 ; j < 3 ; j++)
		{
			printf("Input Score %d : " , j + 1);
			scanf("%d" , &score);
			
			totalScore += score;
		}
		printf("Total Score : %d\n" , totalScore);
		
		if (maxScore < totalScore)
		{
			maxScore = totalScore;
			maxPlayerNo = playerNo;
		}
		printf("\n");
	}
	
	//printing the number of the player who got the maximum score
	printf("The Player who got the Maximum Score of %d is Player No.%d\n" , maxScore , maxPlayerNo);
	
	return 0;
}
