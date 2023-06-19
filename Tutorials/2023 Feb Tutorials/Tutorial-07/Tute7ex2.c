#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypetenuse(double side1, double side2); // function prototype

int main(void)
{
    double side1, side2;

    printf("Enter side 1: ");
    scanf("%lf", &side1);

    printf("Enter side 2: ");
    scanf("%lf", &side2);

    // Using fabs() for getting absolute value
    // https://www.geeksforgeeks.org/fabs-function-in-c/  << More-info

    assert(fabs(hypetenuse(3.0, 4.0)-5.0) <= 0.001);
    assert(fabs(hypetenuse(5.0, 12.0)-13.0) <= 0.001);
    assert(fabs(hypetenuse(8.0, 15.0)-17.0) <= 0.001);
    printf("%lf\n", hypetenuse(side1, side2));

    return 0;

}

double hypetenuse(double side1, double side2)
{
    double hypeten;

    hypeten = sqrt(pow(side1, 2) + pow(side2, 2));

    return hypeten;
}
