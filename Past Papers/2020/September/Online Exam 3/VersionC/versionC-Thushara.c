// Online Test3 - Version C

#include<stdio.h>

#define SIZE 10

// main function
int main(void)
{
	// variable declaration
	int myArray[SIZE];
	int largeNum[SIZE] = {0}; // set all array elements to 0
	int count = 0;
	float average, total = 0;
	
	// enter numbers in to array
	printf("Enter the number series:\n");
	for (count = 0; count < SIZE; count++) {
		scanf("%d", &myArray[count]);
	}
	
	// calculate myArray total
	for (count = 0; count < SIZE; count++) {
		total += myArray[count];
	}
	
	// calculate avarage
	average = total / SIZE;
	
	// print avarage
	printf("\nAverage : %.2f\n", average);
	
	// store large numbers in to largeNum array
	for (count = 0; count < SIZE; count++) {
		if (average < myArray[count]) {
			largeNum[count] = myArray[count];
		}
	}
	
	// print myArray
	printf("myArray: ");
	for (count = 0; count < SIZE; count++) {
		printf("%d ", myArray[count]);
	}
	
	// print largeNum
	printf("\nlargeNum: ");
	for (count = 0; count < SIZE; count++) {
		if (largeNum[count] != 0) {
			printf("%d ", largeNum[count]);
		}
	}
	
    return 0;
}


