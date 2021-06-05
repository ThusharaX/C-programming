#include <stdio.h>

int main()
{
	int ratings[3][4];
	int i,j,total=0,movie;
	float ave,max = 0;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("Input the Ratings for movie %d by reviewer %d: ",i+1,j+1);
			scanf("%d",&ratings[i][j]);
		} printf("\n");
	}
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d\t",ratings[i][j]);
		}printf("\n");
	}
	printf("\n");
	
	for(i=0;i<=2;i++)
	{
		ave = 0;
		total = 0;
		
		for(j=0;j<=3;j++)
		{
			total += ratings[i][j];
		} 
		ave = total / 4.0;
		printf("Average of movie %d is %.2f\n",i+1,ave);
		
		if(max< ave)
		{
			max = ave;
			movie = i+1;
		}
	}
	printf("\nThe movie with highest rating is %d with average of %.2f",movie,max);
	
	return 0;
}
