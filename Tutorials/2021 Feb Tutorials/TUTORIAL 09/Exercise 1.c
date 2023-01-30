//Exercise 1 : Practice to manipulate character array

#include <stdio.h>
#include <string.h>
#define size 20
int main( void )
{//function main begins
	int i, len;//declaring variables
	char fdarray[size], bkarray[size];
	
	printf( "Input Word : " );//prompt
	scanf( "%20s", fdarray );//get inputs
	
	len = strlen(fdarray);//find length
	
	for( i =0; i < (len/2) ; ++i ){
		
		if( fdarray[i] != fdarray[len -1]){
			
			printf( "\nIt is Not a Palindrome\n" );
			return -1;
		}
	}
	printf( "\nIt is a Palindrome\n");
	
}//function main ends
