/* Exercise 3: Practice to use loops (Use while loop)
i) Write a C program to enter 4 module marks of a student from the keyboard and
display the total of all four module marks.
ii) Modify the program written in i) above to enter 4 module marks of 3 students and
display their total marks.
iii) Display the student with the highest total mark. */

#include <stdio.h>
int main( void )
{// function main begins program execution
	int marks, total, hi = 0, hiStudent, student = 1, counter = 1;
	
	printf( "INPUT 3 STUDENTS 4 MODULE MARKS \n AND THIS WILL GIVE YOU TOTAL OF ALL MODULE MARK\n" );
	printf( "\n" ); // prompt
	
	while( student <= 3 ){ // loop 3 times
		
		printf( "\n" ); 
		printf( "Input Student %d Marks \n",student );
		printf( "\n" ); 
	
		total = 0; // get total to 0
		counter = 1; // get counter to 1
			
		while( counter <= 4 ){ // loop  4 times
			printf( "Input Module %d Marks : ",counter );
			scanf( "%d",&marks ); // read marks from user
		
			total = total + marks; // calculate total
			counter++; // increment counter
		} // end of while 
	
		printf( "TOTAL OF 4 MODULE MARKS(STUDENT %d ): %d \n",student,total ); // show total
		
		if( hi <= total ){
			
			hi = total; // set high score
			hiStudent = student; // set top student
		} //end if
	
		student++; // increment student
			
	} // end of while
	

	printf( "\n\n TOP STUDENT IS STUDENT %d ",hiStudent );
	printf( "\n\n SCORE - %d ",hi);
	
return 0;	
} // end of the mein function
