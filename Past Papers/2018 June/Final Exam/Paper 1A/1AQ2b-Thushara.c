/* Final Paper 2018
*  Question 2 Part B
*/

// including header files
#include<stdio.h>

#define SIZE 4

// main function
int main(void) {
	
	char bulbs[SIZE][SIZE];
	int q, r;
	
	// input bulb
	for (r = 0; r < SIZE; r++) {
		for (q = 0; q < SIZE; q++) {
			scanf(" %c", &bulbs[r][q]);
		}
	}
	
	// print bulb array
	printf("\n");
	for (r = 0; r < SIZE; r++) {
		for (q = 0; q < SIZE; q++) {
			printf("%c  ", bulbs[r][q]);
		}
		printf("\n");
	}
	
	// print Red LED bulb positions
	printf("\nRed LED bulb positions\n");
	for (r = 0; r < SIZE; r++) {
		for (q = 0; q < SIZE; q++) {
			if (bulbs[r][q] == 'R') {
				printf("[%d,%d] ", r, q);
			}
		}
	}

	return 0;	
}





