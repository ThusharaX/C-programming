// including header files
#include <stdio.h>    

// main function
int main() {
    
    // initialize variables 
    int motion[] = {10, 6, 8, 2, 9}, lengthOfArray, i, firstIndex;
    
    // array length
    lengthOfArray = 5;
    
    // printing original array    
    printf("Initial values : ");    
    for (i = 0; i < lengthOfArray; i++) {     
        printf("%d ", motion[i]);     
    }
    
    // store first element
    firstIndex = motion[0];
	
	// rotating
	for (i = 0; i < lengthOfArray - 1; i++) {
		motion[i] = motion[i+1];
	}
	
	// adding first element in to last element
	motion[i] = firstIndex;
	
	// printing rotated array    
    printf("\nAfter rotating : ");    
    for (i = 0; i < lengthOfArray; i++) {     
        printf("%d ", motion[i]);     
    }
    
    return 0;    
}
