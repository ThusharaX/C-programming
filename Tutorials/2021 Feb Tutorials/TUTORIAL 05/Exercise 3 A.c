/* Exercise 3: Practice to use loops (Use while loop)
i) Write a C program to enter 4 module marks of a student from the keyboard and
display the total of all four module marks. */

#include <stdio.h>
int main( void )
{// function main begins program execution
	int marks,total=0,counter = 1;
	
	printf( "INPUT YOUR 4 MODULE MARKS AND THIS WILL GIVE YOU TOTAL OF ALL MODULE MARK\n" );
	printf( "\n" ); // prompt
	
	while( counter <= 4 ){ // loop  4 times
		printf( "Input Module %d Marks : ",counter );
		scanf( "%d",&marks ); // read marks from user
		
		total = total + marks; // calculate total
		counter++; // increment counter
	} // end of while 
	
	printf( "\nTOTAL OF 4 MODULE MARKS : %d \n",total ); // show total
	
return 0;	
} // end of the mein function
