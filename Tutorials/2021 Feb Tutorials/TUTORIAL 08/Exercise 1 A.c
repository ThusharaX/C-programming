/*Exercise 1: Practice to store and print data in an array
ex a */

#include <stdio.h>
int main( void )
{//function main begins
	int counter;
	float marks[10];
	
	
	for( counter = 0 ; counter < 10 ; ++counter ){
		
		printf( "Input Mark %d : ", counter );//prompt 
		scanf("%f", &marks[counter]);//read marks from user
		
	}
	
	return 0;
}// end of the main function
