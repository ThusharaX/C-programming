/*
Write a function called   circleArea()   that  take  the  radius  of  a  circle  as  an  argument  and  calculate and return the area.
In the main program read the radius value from the user, call circleArea()  and display the result.

Extended program : program extend with do-while loop & if statement.
basic program : not Extended, only exercise answer.
*/

//------------------------------------------------------------------------------

// Extended program

#include <stdio.h>

float circleArea(float radius); // this is function prototype ()

// begin main function
int main(void)
{
    float circleRadius, area = 0; // declare variables

    // for looping
    do{
        printf("Enter circle radius(enter '0' to exit): ");
        scanf("%f", &circleRadius);

        if(circleRadius == 0) // check circleRadius is 0,(if circleRadius == 0,stop running following statements & loop)
            break;

        printf("circle Area = %.2f\n\n", circleArea(circleRadius)); // calling circleArea function & print output.

    } while(circleRadius); // check circleRadius is not equal to 0, if circleRadius is 0 program exit.

    printf("\nProgram Exited..\n");

    return 0;
} // end of main function

// begin circleArea function
float circleArea(float radius) // this is function definition
{
    return radius * radius * (22.0/7.0);

} // end of circleArea function

// ------------------------------------------------------------------

/*
// Basic program

#include <stdio.h>

float circleArea(float radius);

int main(void)
{
	float r;
	printf("Enter Radius : ");
	scanf("%f",&r); //input radius
	printf("Area = %.2f",circleArea(r)); //print area
}

float circleArea(float radius)
{
	return (22/7.0)*radius*radius;
} //end of main function

*/
