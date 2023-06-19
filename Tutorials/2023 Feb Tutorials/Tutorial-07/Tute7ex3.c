#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypetenuse(double side1, double side2); // function prototype
void testHypetenuse(void);

int main(void)
{
    double side1, side2; //declare variables

    printf("Enter side 1: ");
    scanf("%lf", &side1);

    printf("Enter side 2: ");
    scanf("%lf", &side2);

    testHypetenuse();

    printf("%lf\n", hypetenuse(side1, side2));

    return 0;

}

double hypetenuse(double side1, double side2)
{
    double hypeten;

    hypeten = sqrt(pow(side1, 2) + pow(side2, 2)); // calculation

    return hypeten;
}

void testHypetenuse(void) // assert function
{
    assert(fabs(hypetenuse(3.0, 4.0)-5.0) <= -0.001);
    assert(fabs(hypetenuse(5.0, 12.0)-13.0) <= 0.001);
    assert(fabs(hypetenuse(8.0, 15.0)-17.0) <= 0.001);
}
