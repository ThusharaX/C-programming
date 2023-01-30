/* Exercise 3: Practice to manipulate data in arrays
Write a C program to create an integer array called Motion of size 5. Ask the user to enter
values to the array from the keyboard. Rotate the values of the array by one position in the
forward direction and display the values.  */

#include <stdio.h>
int main (void)
{ //function main begins
	int no[5], counter, temp;
	
	for ( counter =0 ; counter < 5; ++counter ){ //for loop for get input begins
		
		printf( "Input Number %d : ", counter + 1);//prompt
		scanf( "%d", &no[counter]);//read inputs from user
		
	}//for loop ends
	
	printf( "Initial values : %d\t %d\t %d\t %d\t %d\n", no[0], no[1], no[2], no[3], no[4]);// print initioal value
	
	temp = no[0];// use temp
	
	for( counter =0 ; counter < 4; ++counter){//rotating for loop begins
		
		no[counter] = no[counter + 1];
		
	}
	
	no[4] = temp;
	
	printf( "After rotating : %d\t %d\t %d\t %d\t %d\n", no[0], no[1], no[2], no[3], no[4]);
return 0;
}//end of the main function

