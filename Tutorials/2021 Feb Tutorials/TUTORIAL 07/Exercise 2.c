/*Exercise 2: Practice to write assert statements to debug the functions which return float
or double values.

Define a function called hypotenuse that calculates the length of the hypotenuse of a right
triangle when the other two sides are given. The function should take two arguments of type
double and return the hypotenuse as a double. In your main program write three assert
statements to debug your function for the following scenarios. */

#include <stdio.h>
#include <math.h>
#include <assert.h>
double hypotenus( double x, double y );//declaring function
int main( void )
{
	double a,b,r ;//declaring veriables
	
	assert(fabs(hypotenus(3.0, 4.0)-5.0) <= 0.001);
	assert(fabs(hypotenus(5.0, 12.0)-13.0) <= 0.001);
	assert(fabs(hypotenus(8.0, 15.0)-17.0) <= 0.001);
	
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
