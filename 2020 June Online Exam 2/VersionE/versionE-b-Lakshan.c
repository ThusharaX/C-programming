//Online Exam01 versionE
#include <stdio.h>
#include<math.h>

// function prototype
float findRadianValue(float angleInDegrees);
void printRadianValues(void);

// main function
int main()
{
    //function call
    printRadianValues();

    return 0;
}

// function implementation
float findRadianValue(float angleInDegrees)
{
    float radianValue;

    radianValue = M_PI / 180 * angleInDegrees;

    return radianValue;
}

void printRadianValues(void)
{
    float radianValue, angleInDegrees;
    int count = 0;

    angleInDegrees = 100;

    printf("Angle(degrees)\tAngle(radians)\n");

    while(count < 6)
    {
        radianValue = findRadianValue(angleInDegrees);

        printf("%.0f\t\t\t%.3f\n", angleInDegrees, radianValue);

        count = count + 1;

        angleInDegrees = angleInDegrees + 20;
    }

}
