#include <stdio.h>

// main function
int main(void)
{	
	int rate[5] = {0};
	int rating = 1; /* rating to be enterd by user
					 * rating = 1 for begin while loop
					 */
	int i; // counter control variable
	
	// begin while
	while (rating != -1) {
		
		// user input for rating
		printf("Pls input the service rating (1- 5): "); // prompt for input
		scanf("%d", &rating);
		
		// check if rating valid
		if (rating >= 1 && rating <= 5) {
			rate[rating-1] += 1; // store the number of response for rate
		} // end if
		
		else if (rating == -1) {
			break;
		} // end else if
		
		// invalid rating error message
		else {
			printf("Invalid Input\n");
			continue;
		} // end else
	}// end while
	
	printf("\nRating\tNumber of response\n"); // prompt
	// loop each element in array
	for (i = 0; i < 5; i++) { // loop 5 times
		printf("%d\t%d\n", i+1, rate[i]); // print results
	}
	
	return 0;
	
} // end function main

