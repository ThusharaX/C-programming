#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{   float a;
    printf("Enter radius: ");
    scanf(" %f",&a);
    printf("diameter: %.2f\n",a*2);
    printf("circumference: %.2f\n",(a*2*22/7));
    printf("area: %.2f\n",pow(a,2)*22/7);

    return 0;
}
