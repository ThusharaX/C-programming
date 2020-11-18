#include <stdio.h>
#include <stdlib.h>


int main()
{
    int p;
    int d;
    float r;

    printf("Enter Principal: ");
    scanf("%d",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter no of days: ");
    scanf("%d",&d);

    printf("Interest :  %.2f: ",(p*d*r/365));

    return 0;
}
