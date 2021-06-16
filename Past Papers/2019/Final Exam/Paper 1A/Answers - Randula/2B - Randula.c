#include<stdio.h>

int main (void)
{
	int rating[3][4] = {4,6,2,5,7,9,4,8,6,9,3,7,} ;
	int i , j , highAvgMoive;
	float average[3] , highAverage = 0 , total = 0;
	
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 4 ; j++)
		{
			rating[3][4] = 0;
			average[i] = 0;
		}	
	}
	
	for(i = 0 ; i < 3 ; i++)
	{
		printf("Review for the Movie No - %d\n" , i + 1);
		for(j = 0 ; j < 4 ; j++)
		{
			printf("Enter the Review of Reviewer No - %d : " , j + 1);
			scanf("%d" , &rating[i][j]);
		}	
	}
	
	printf("\n");
	
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 4 ; j++)
		{
			printf("%d " , rating[i][j]);
		}
		printf("\n");	
	}
	printf("\n");	
	
	for(i = 0 ; i < 3 ; i++)
	{
		total = 0;
		for(j = 0 ; j < 4 ; j++)
		{
			total += rating[i][j]; 
		}
		average[i] = total / j;
		printf("Average Rating for Moive no %d - %.2f\n" , i + 1 , average[i]);
	}
	printf("\n");
	
	for(i = 0 ; i < 3 ; i++)
	{
		if (highAverage < average[i])
		{ 
			highAverage = average[i];
			highAvgMoive = i;
		}
	}
	printf("The movie no %d got the Highest Average of %.2f\n" , highAvgMoive + 1 , average[highAvgMoive]);
	
	return 0;
}
