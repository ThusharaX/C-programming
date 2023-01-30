#include<stdio.h>		// including header files
#include<assert.h>
#include<math.h>

// function prototype
double hypotenuse(double side1, double side2);
void testHypotenuse();

// main function
int main() {
	
	// function call
	testHypotenuse();
	
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

void testHypotenuse() {
	assert(hypotenuse(6.0, 8.0) == 10.0);
	assert(hypotenuse(10.0, 24.0) == 26.0);
	assert(hypotenuse(32.0, 60.0) == 68.0);
}
