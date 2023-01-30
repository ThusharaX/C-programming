/*Write a C program that read numbers from an integer array and graph the information in the
form of bar chat. Sample output is given below.*/

#include <stdio.h>
int main( void )
{//function main begins
	int no[10], counter, i;
	
	for( counter = 0 ; counter < 10 ; ++counter ){
		
		printf( "Input Element %d for array : ", counter );
		scanf( "%d", &no[counter]);
		
	}
	
	printf( "Element\tValue\tHistogram\n" );
	
	for( counter=0 ; counter < 10 ; ++counter ){
		
		printf( "%d\t%d\t ", counter, no[counter] );
		
		for( i = 1; i <= no[counter] ; ++i ){
			
			printf( "*" );
		}
		printf( "\n" );
			
	}
	
return 0;
}//function main ends
