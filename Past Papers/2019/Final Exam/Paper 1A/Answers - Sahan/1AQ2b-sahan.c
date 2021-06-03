#include<stdio.h>
int main()
{
	int i, j, totRate, maxrMovie;
	int ratings[3][4];
	float avgRate[3], maxRate;
	
	maxRate = 0;
	
	for(i=0; i<3; ++i)
	{
		for(j=0; j<4; ++j)
		{
			ratings[i][j] = 0;
			
			printf("%d review for Movie %d: ", i+1, j+1);
			scanf("%d", &ratings[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<3; ++i)
	{
		totRate = 0;
		
		for(j=0; j<4; ++j)
		{
			printf("%d  ", ratings[i][j]);
			totRate += ratings[i][j];
		}
		avgRate[i] = totRate / 4.0;
		
		if(maxRate < avgRate[i])
		{
			maxRate = avgRate[i];
			maxrMovie = i+1;
		}
		
		printf("\n");
	}
	printf("\nMovie\tRate(avg)");
	for(i=0; i<3; ++i)
	{
		printf("\n%d\t%.2f", i+1, avgRate[i]);
	}
	printf("\n\nMovie with highest average rating: %d", maxrMovie);
	return 0;
}
