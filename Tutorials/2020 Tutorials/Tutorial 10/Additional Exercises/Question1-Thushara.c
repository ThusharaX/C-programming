#include <stdio.h>

// main function
int main() {
	
	// declaring variables
	int numbers[5], count, i, max = 0;
	
	// input values to numbers array
	for (count = 1; count <= 5; count++) {
		printf("Enter value : ");
		scanf("%d", &numbers[count]);
	}
	
	// finding maximun value of the array
	for (i = 1; i < count; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	
	// printing maximun value
	printf("\nMaximum value : %d", max);
	
    return 0;
}
