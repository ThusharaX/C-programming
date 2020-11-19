#include<stdio.h>		// including header files
#include<assert.h>
#include<math.h>

// function prototype
double hypotenuse(double side1, double side2);

// main function
int main() {
	
	// assert
	assert(hypotenuse(3.0, 4.0) == 5.0);
	assert(hypotenuse(5.0, 12.0) == 13.0);
	assert(hypotenuse(8.0, 15.0) == 17.0);
	
	// print hypotenuse
	printf("Triangle 1 Hypotenuse : %f\n", hypotenuse(3.0, 4.0));
	printf("Triangle 2 Hypotenuse : %f\n", hypotenuse(5.0, 12.0));
	printf("Triangle 3 Hypotenuse : %f\n", hypotenuse(8.0, 15.0));

	return 0;
}

// function definition
double hypotenuse(double side1, double side2) {
	double hypotenuse;
	
	hypotenuse = sqrt((side1 * side1) + (side2 * side2));
	
	return hypotenuse;		// return statement
}
