/*Exercise 2: Practice to access data stored in an array
Modify the above program to find the mean of the marks stored in the array */

#include <stdio.h>
int main( void )
{//function main begins
	int counter;
	float marks[10], check_marks, mean, sum =0;
	
	for( counter = 0 ; counter < 10 ; ++counter ){
		
		printf( "Input Mark %d : ", counter+1 );//prompt 
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
		
		printf( "Student %d%8.2f\n", counter + 1 , marks[counter]);
		
	}// printing for loop ends
	
	for ( counter =0 ; counter < 10; ++counter ){
		
		sum = sum + marks[counter];
	}
	
	mean = sum / 10;
	
	printf( "\n Mean of the marks %.2f", mean);
	
	return 0;
}// end of the main function
