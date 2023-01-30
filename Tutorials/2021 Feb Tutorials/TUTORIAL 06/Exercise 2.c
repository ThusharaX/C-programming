/*Exercise 2 : Practice to write a simple function
Write a function called circleArea() that take the radius of a circle as an argument and
calculate and return the area. In the main program read the radius value from the user, call
circleArea() and display the result. */

#include <stdio.h>
float circleArea(float radius);
int main(void)
{
	float r;
	printf("Enter Radius : ");
	scanf("%f",&r);//input radius
	printf("Area = %.2f",circleArea(r));//print aria
}
float circleArea(float radius)
{
	return (22/7.0)*radius*radius;
}//end of main function
