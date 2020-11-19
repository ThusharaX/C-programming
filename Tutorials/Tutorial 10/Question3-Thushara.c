#include <stdio.h>

// main function
int main()
{	
	// declaring variables
	int motion[5], count, motionAfter[5];
	
	// adding values in to array
	for (count = 1; count <= 5; count++) {
		printf("Enter value :");
		scanf("%d", &motion[count]);
		
		// rotating array
		motionAfter[6 - count] = motion[count];
	}
	
	// printing rotated array
	printf("\nAfter Rotating : ");
	for (count = 1; count <= 5; count++) {
		printf("%d ", motionAfter[count]);
	}
	
    return 0;
}
