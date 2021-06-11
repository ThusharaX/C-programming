#include<stdio.h>
void inputProduction(int array[], int size);
int minimumProduction(int array[], int size);
int maximumProduction(int array[], int size);
void averageProduction(int array1[], int array2[], float array3[], int size);
void printProduction(int array[], int size);
void displayDay(int array[], int size, int production);

int main()
{
	int machine_A[7], machine_B[7];
	float machine_Total[7];
	
	printf("Machine A\n");
	inputProduction(machine_A, 7);
	printf("\nMachine B\n");
	inputProduction(machine_B, 7);
	
	printf("\n\nHighest production day of Machine A: ");
	displayDay(machine_A, 7, maximumProduction(machine_A, 7));
	printf("\nHighest production day of Machine B: ");
	displayDay(machine_B, 7, maximumProduction(machine_B, 7));
	
	printf("\nLowest production day of Machine A: ");
	displayDay(machine_A, 7, minimumProduction(machine_A, 7));
	printf("\nLowest production day of Machine B: ");
	displayDay(machine_B, 7, minimumProduction(machine_B, 7));
	
	printf("\n\nAverage Production for each day: \n");
	averageProduction(machine_A, machine_B, machine_Total, 7);
	
	printf("\nProduction of Machine A\n");
	printProduction(machine_A, 7);
	printf("\nProduction of Machine B\n");
	printProduction(machine_B, 7);
	
	return 0;
}

void inputProduction(int array[], int size)
{
	int i;
	
	for (i = 0; i < size; ++i) {
		printf("Input productoin of day %d: ", i+1);
		scanf("%d", &array[i]);
	}
}

int minimumProduction(int array[], int size)
{
	int i, min;
	min = array[0];
	
	for (i = 1; i < size; ++i) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

int maximumProduction(int array[], int size)
{
	int i, max;
	max = array[0];
	
	for (i = 1; i < size; ++i) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

void averageProduction(int array1[], int array2[], float array3[], int size)
{
	int i;
	
	for (i = 0; i < size; ++i) {
		array3[i] = (array1[i] + array2[i]) / 2.0;
		printf("%d\t%.2f\n", i+1, array3[i]);
	}
}

void printProduction(int array[], int size)
{
	int i, j, asterisk;
	
	for (i = 0; i < size; ++i) {
		if (array[i] % 10 < 5)
			asterisk = array[i] / 10;
		
		else if (array[i] % 10 >= 5)
			asterisk = array[i] / 10 + 1;
			
		for (j = 1; j <= asterisk; ++j) {
			printf("*");
		}
		printf("\n");
	}
}

void displayDay(int array[], int size, int production)
{
	int i, day;
	
	for (i = 0; i < size; ++i) {
		if (array[i] == production) {
			day = i;
			break;
		}
	}
	
	switch (day) {
		case 0: printf("Monday");
				break;
		case 1: printf("Tuesday");
				break;
		case 2: printf("Wednesday");
				break;
		case 3: printf("Thursday");
				break;
		case 4: printf("Friday");
				break;
		case 5: printf("Saturday");
				break;
		case 6: printf("Sunday");
				break;
		default: ;
	}
}
