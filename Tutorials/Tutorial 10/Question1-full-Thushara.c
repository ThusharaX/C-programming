#include <stdio.h>

// main function
int main()
{	
	// declaring variables
	int count, marks, marksList[10], total = 0;
	float mean;
	
	// adding marks to the array
    for (count = 1; count <= 10;) {
    	printf("Enter Marks : ");
    	scanf("%d", &marks);
    	
    	// check if marks between 0 to 20
    	if (marks > 0 && marks < 20) {
    		marksList[count] = marks;
    		count++;
		}
	}
	
	// finding total of the marksList array
	for (count = 1; count <= 10; count++) {
    	total += marksList[count];
	}
	
	// finding mean of the marks
	mean = (float)total / 10;
	
	// printing mean of the marks
	printf("\nMean of the marks : %.2f ", mean);
	
    return 0;
}
