#include <stdio.h>
#include <stdlib.h>

float circleArea(float r);//function intilaization
int main()
{
    float r;
    printf("Enter Radius: ");
    scanf("%f",&r);

    float a = circleArea(r);//calling function and assign return value to a.
    printf("Area: %.2f",a);

    return 0;
}

float circleArea(float r){
    return( pow(r,2)*22/7 );
}
