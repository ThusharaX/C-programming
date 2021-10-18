#include<stdio.h>

int main()
{
	int i, j;
	float rainfall[3][4], maxRainfall[4];
	
	for (i = 0; i < 3; ++i)
	{
		maxRainfall[i] = 0;
		
		for (j = 0; j < 4; ++j){
			rainfall[i][j] = 0;
			
			printf("Input the rainfall for day %d in city %d: ", i+1, j+1);
			scanf("%f", &rainfall[i][j]);
			
			if (rainfall[i][j] > maxRainfall[i])
				maxRainfall[i] = rainfall[i][j];
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; ++i)
	{
		printf("\nMaximum rainfall for day %d: %.2f", i+1, maxRainfall[i]);
	}
	
	return 0;
}
