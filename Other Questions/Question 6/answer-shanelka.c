#include <stdio.h>

// function declaration
float findRadianValue(float angleInDegrees);
void printdRadianValues(void);

// start the main
int main(void) {
    // local variable declaration
    float degrees, radians;

    printf("Angle (degrees)\t\tAngle(radian)\n");

    radians = findRadianValue(degrees);
    printdRadianValues();
    
    return 0;
} // end of main

// function implementation
float findRadianValue(float angleInDegrees) {
    float radian;

    radian = (22.0 / 7) / 180 * angleInDegrees;

    return radian;
}

void printdRadianValues(void) {
    float degrees, i;
    for (i = 100; i <= 200; i += 20) {
        degrees = i;
        printf("%.2f\t%.3f\n", degrees, findRadianValue(degrees));
    }
}