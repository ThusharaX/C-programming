/*Exercise 3: Practice to write test functions to debug another function.
Modify the above program to have another function called testHypotenuse() which contains
the three assert statements you wrote. Call testHypotenuse() function in your main program.*/

#include <stdio.h>
#include <math.h>
#include <assert.h>
double hypotenus( double x, double y );//declaring function
void test_point();

//function main begins
int main( void )
{
	double a,b,r ;//declaring veriables
	
	test_point();
	
	printf( "Input Side 1 : ");//prompt for user input
	scanf( "%lf",&a );//reading side 1
	
	printf( "Input Side 2 : ");//prompt for user input
	scanf( "%lf",&b );//reading side 2
	
	r = hypotenus( a,b );//calling hypotenus function
	
	printf( "Hypothenus : %.2f ", r);//print r
	return 0;
	
}// end of main functin


double hypotenus( double x, double y )// hypotenus function begins
{
	
	return fabs(sqrt(( x*x ) + ( y*y )));//return hypotenus
	
}// end of hypothenus function

void test_point(){// test function begins
	
	assert(fabs(hypotenus(3.0, 4.0)-5.0) <= 0.001);
	assert(fabs(hypotenus(5.0, 12.0)-13.0) <= 0.001);
	assert(fabs(hypotenus(8.0, 15.0)-17.0) <= 0.001);
	
}//end of test function
