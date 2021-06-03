#include<stdio.h>

// Online Test2 - Version C - a

// main function
int main(void)
{
	// variable declaration
	int i, r, p, value = 2;
	
	// nested loop
	for (i = 1; i <= value; i++) {
		for (r = 1; r <= value; r++) {
			for (p = 1; p <= value; p++) {
				// print
				printf("[%d %d %d]\n", i, r, p);
			}
		}
	}
	
    return 0;
}


