#include<stdio.h>

void inputProduction(int array[], int size);
int minimumDay(int array[], int size);
int maximumDay(int array[], int size);
int totalProduction(int array[], int size);
float averageProduction(int array[], int size);
void compareProduction(int array1[], int array2[], int array3[], int size);
void displayProduction(int array[], int size, int day);

int main()
{
	int week1_production[7], week2_production[7], production_highest[7];
	
	inputProduction(week1_production, 7);
	inputProduction(week2_production, 7);
	
	printf("\nHighest production day of Week 1: ");
	displayProduction(week1_production, 7, maximumDay(week1_production, 7));
	
	printf("\nHighest production day of Week 2: ");
	displayProduction(week2_production, 7, maximumDay(week2_production, 7));
	
	printf("\nLowest production day of Week 1: ");
	displayProduction(week1_production, 7, minimumDay(week1_production, 7));
	
	printf("\nLowest production day of Week 2: ");
	displayProduction(week2_production, 7, minimumDay(week2_production, 7));
	
	printf("\nAvarage production day of Week 1: %.2f", averageProduction(week1_production, 7));
	
	printf("\nAvarage production day of Week 2: %.2f", averageProduction(week2_production, 7));
	
	printf("\nTotal production day of Week 1: %d", totalProduction(week1_production, 7));
	
	printf("\nTotal production day of Week 2: %d", totalProduction(week2_production, 7));
	
	printf("\nHighest production of each day: ");
	compareProduction(week1_production, week2_production, production_highest, 7);
	
	return 0;
}

void inputProduction(int array[], int size)
{
	int i;
	
	for(i=0; i<size; ++i)
	{
		array[i] = 0;
		
		printf("Input production of day %d: ", i+1);
		scanf("%d", &array[i]);
	}
	printf("\n");
}

int minimumDay(int array[], int size)
{
	int i, minProduction, minimumDay;
	
	minProduction = array[0];
	minimumDay = 1;
	
	for(i=1; i<size; ++i)
	{
		if (minProduction > array[i])
		{
			minProduction = array[i];
			minimumDay = i+1;
		}
	}
	return minimumDay;
}

int maximumDay(int array[], int size)
{
	int i, maxProduction, maximumDay;
	
	maxProduction = array[0];
	maximumDay = 1;
	
	for(i=1; i<size; ++i)
	{
		if (maxProduction < array[i])
		{
			maxProduction = array[i];
			maximumDay = i+1;
		}
	}
	return maximumDay;
}

int totalProduction(int array[], int size)
{
	int i, total;
	
	total = 0;
	
	for(i=0; i<size; ++i)
	{
		total += array[i];
	}
	return total;
}

float averageProduction(int array[], int size)
{
	float average;
	
	average = totalProduction(array, size) / size;
	
	return average;
}

void compareProduction(int array1[], int array2[], int array3[], int size)
{
	int i;
	
	for (i=0; i<size; ++i)
	{
		if (array1[i] < array2[i])
			array3[i] = array2[i];
		else if (array1[i] > array2[i])
			array3[i] = array1[i];
			
		printf("%d ", array3[i]);
	}
}

void displayProduction(int array[], int size, int day)
{
	int i;
	
	for (i=0; i<size; ++i)
	{
		if (day == i+1)
		{
			printf("%d(%d)", day, array[i]);
		}
	}
}
