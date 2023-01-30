/* Exercise 1: Practice to write assert statement to debug functions
Write a function qualityPoints that inputs a student’s average and return 4 it’s 90-100 , 3 if
it’s 80-89 , 2 if it’s 70-79, 1 if it’s 60-69 , and 0 if the average is lower than 60.
In the main program, write assert statements to debug the above implemented function. You
have to write assert statements for boundary values and middle values of the ranges. */

#include <stdio.h>
#include <assert.h>
int qualityPoint( float average );//declaring function
void test_point();
int main( void )
{//function main begins
	float avg;//declaring variables
	int point;
	
	test_point();// calling test_point function
	
	printf( "Input Average : ");//promt for user input
	scanf("%f", &avg );//read average fromuser
	
	point = qualityPoint( avg );//calling qualityPoint function
	
	printf( "Quality Point : %d", point);//show quality point
	
	return 0;
}//end of main function

int qualityPoint( float average )//qualityPoint function begins
{
	int point;//declaring variables
	
	if( average > 100 || average < 0 ){
		point = -1 ;
	}
	
	else if( average >= 90 ){
		point = 4;
	}
	
	else if( average >= 80 ){
		point = 3;
	}
	
	else if( average >= 70 ){
		point = 2;
	}
	
	else if( average >= 60 ){
		point = 1;
	}
	
	else {
		point = 0;
	}
	
	return point;
}//end of qualityPoint function

void test_point(){
	// boundary values
	assert ( qualityPoint(100) == 4 );
	assert ( qualityPoint(90) == 4 );
	assert ( qualityPoint(80) == 3 );
	assert ( qualityPoint(70) == 2 );
	assert ( qualityPoint(60) == 1 );
	assert ( qualityPoint(50) == 0 );
	assert ( qualityPoint(40) == 0 );
	assert ( qualityPoint(30) == 0 );
	assert ( qualityPoint(20) == 0 );
	assert ( qualityPoint(10) == 0 );
	assert ( qualityPoint(0) == 0 );
	
	// middle values
	assert ( qualityPoint(95) == 4 );
	assert ( qualityPoint(85) == 3 );
	assert ( qualityPoint(75) == 2 );
	assert ( qualityPoint(65) == 1 );
	assert ( qualityPoint(55) == 0 );
	assert ( qualityPoint(45) == 0 );
	
	//invalid inputs
	assert ( qualityPoint(-1) == -1 );
	assert ( qualityPoint(101) == -1);

}//test function ends

