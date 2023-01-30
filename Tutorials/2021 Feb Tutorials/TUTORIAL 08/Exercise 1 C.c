/*Exercise 1: Practice to store and print data in an array
ex b C */
#include <stdio.h>
int main( void )
{//function main begins
	int counter;
	float marks[10], check_marks;
	
	for( counter = 1 ; counter <= 10 ; ++counter ){
		
		printf( "Input Mark %d : ", counter );//prompt 
		scanf("%f", &check_marks);//read marks from user
		
		if( check_marks >= 0 && check_marks <=20 ){// checking condition
			
			marks[counter] = check_marks;
			
		}
		
		else {
			
			printf( "\n:: Invalid marks :: \n");//prompt
			counter = counter - 1 ; // get counter to back
			
		}
		
	}
	
	printf( "\n__________________________________\n" );
	printf( "%s%10s\n","Student","Marks");// make a table
	
	for ( counter =0; counter < 10; ++counter){//printing for loop begins
		
		printf( "Student %d%8.2f\n", counter, marks[counter]);
		
	}// printing for loop ends
	
	return 0;
}// end of the main function
