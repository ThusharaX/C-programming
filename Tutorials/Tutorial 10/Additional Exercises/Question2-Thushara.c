#include <stdio.h>

// function prototype
void printGraph(int);

// main function
int main()
{	
	// declaring variables
	int count, numbers[10] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
	
	// printing header
	printf("Element\tValue\tHistogram\n");
	
	// printing Element & Value
	for (count = 0; count < 10; count++) {
		printf("%d\t%d\t", count, numbers[count]);
		
		// function call for print graph
		printGraph(numbers[count]);
		printf("\n");
	}
	
    return 0;
}

// function definition
void printGraph(int value) {
	int i;
	for (i = 1; i <= value; i ++) {
		printf("*");
	}
}



