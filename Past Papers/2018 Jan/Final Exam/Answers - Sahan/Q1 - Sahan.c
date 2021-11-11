#include<stdio.h>
void inputRainfall(float array[], int size);
int minimumRainfall(float array[], int size);
int maximumRainfall(float array[], int size);
float averageRainfall(float array[], int size);
void displayRainfall(float array[], int index);
void printReport(float array1[], float array2[], int size);

int main()
{
	float district_A[7], district_B[7];
	printf("District A\n");
	inputRainfall(district_A, 7);
	printf("\nDistrict B\n");
	inputRainfall(district_B, 7);
	
	printf("\nHighest rainfall of District A: ");
	displayRainfall(district_A, maximumRainfall(district_A, 7));
	printf("\nHighest rainfall of District B: ");
	displayRainfall(district_B, maximumRainfall(district_B, 7));
	printf("\nLowest rainfall of District A: ");
	displayRainfall(district_A, minimumRainfall(district_A, 7));
	printf("\nLowest rainfall of District B: ");
	displayRainfall(district_B, minimumRainfall(district_B, 7));
	printf("\nAverage Rainfall of District A: %.1f", averageRainfall(district_A, 7));
	printf("\nAverage Rainfall of District B: %.1f", averageRainfall(district_B, 7));
	printReport(district_A, district_B, 7);
	
	return 0;
}

void inputRainfall(float array[], int size)
{
	int i;
	
	for(i = 0; i < size; ++i) {
		printf("Input rainfall for day %d: ", i+1);
		scanf("%f", &array[i]);
		
		while (array[i] < 0 || array[i] > 1000) {
			printf("The value is out of the range!\nInput rainfall for day %d: ", i+1);
			scanf("%f", &array[i]);
		}
	}
}

int minimumRainfall(float array[], int size)
{
	int i, minIndex = 0;
	float min = array[0];
	
	for (i = 1; i < size; ++i) {
		if (min > array[i]) {
			min = array[i];
			minIndex = i;
		}
	}
	return minIndex;
}

int maximumRainfall(float array[], int size)
{
	int i, maxIndex = 0;
	float max = array[0];
	
	for (i = 1; i < size; ++i) {
		if (max < array[i]) {
			max = array[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

float averageRainfall(float array[], int size)
{
	int i;
	float total = 0, average;
	
	for (i = 0; i < size; ++i) {
		total += array[i];
		average =(float) total / size;
	}
	return average;
}

void displayRainfall(float array[], int index)
{
	printf("%.1f mm", array[index]);
}

void printReport(float array1[], float array2[], int size)
{
	int i;
	
	printf("\n\n\t\t\t R E P O R T\nDay\t\tDistrict A\tDistrict B\tMinimum\t\tMaximum");
	
	for (i = 0; i < size; ++i) {
		switch (i) {
			case 0: printf("\nMonday\t\t");
					break;
			case 1: printf("\nTuesday\t\t");
					break;
			case 2: printf("\nWednesday\t");
					break;
			case 3: printf("\nThursday\t");
					break;
			case 4: printf("\nFriday\t\t");
					break;
			case 5: printf("\nSaturday\t");
					break;
			case 6: printf("\nSunday\t\t");
					break;
		}
		displayRainfall(array1, i);
		printf("\t");
		displayRainfall(array2, i);
		printf("\t");
		
		if (array1[i] < array2[i])
			printf("%.1f mm\t%.1f mm", array1[i], array2[i]);
		else if (array1[i] > array2[i])
			printf("%.1f mm\t%.1f mm", array2[i], array1[i]);
	}
	printf("\n\nRainfall Range");
	
	printf("\nDistrict A: Min=");
	displayRainfall(array1, minimumRainfall(array1, size));
	printf("  Max=");
	displayRainfall(array1, maximumRainfall(array1, size));
	
	printf("\nDistrict B: Min=");
	displayRainfall(array2, minimumRainfall(array2, size));
	printf("  Max=");
	displayRainfall(array2, maximumRainfall(array2, size));
	
	printf("\n\nAverage Rainfall");
	printf("\nDistrict A: %.1f\nDistrict B: %.1f", averageRainfall(array1, i), averageRainfall(array2, i));
}
