// Online Test2 - Version B - a

#include<stdio.h>

// main function
int main(void)
{
	// variable declaration
	int i, j;
	int value = 97; // initialize value variable
	
	// print rows
	for (i = 1; i <= 5; i++) {
		
		// print column
		for (j = 5; j >= i; j--) {
			
			// print character value
			printf("%c", value);
		}
		printf("\n");
		
		// increse value by 1
		value += 1;
	} // end for
	
    return 0;
}


