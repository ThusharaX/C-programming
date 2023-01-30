//Exercise 4: Practice to write nested loops

#include <stdio.h>
int main( void )
{// function main begins
	int i,counter;

	for( i = 1; i <= 7 ; i++){ //1st for loop begins
	
		for( counter = 1; counter <= i ; counter++){ //2nd for loop begins
			printf( "*");
	} //2nd for  loop end
	printf( "\n");
	
	} //1st for loop ends
	
	for( i = 7; i >=1 ; i-=2){ //3rd for loop begins
		
			for( counter = 1; counter <= i ; counter++ ){ //4th for loop begins
			printf( "*");
	} //4th for loop ends
	printf("\n");
	} //3rd for loop ends
	
return 0;
} //end of the main function
