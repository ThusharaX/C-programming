#include <stdio.h>
#include <stdlib.h>

void roots(float a,float b,float c);//i)function initialization

int main()
{
    float a;
    float b;
    float c;

    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);

    roots(a,b,c);

    return 0;
}

void roots(float a,float b,float c){

    float d = sqrt( (pow(b,2)-(4*a*c)) );
    //root 1
    float r1 = ((-b)+d)/(2*a);
    //root 2
    float r2 = ((-b)-d)/(2*a);

    printf("Roots are: %.2f, %.2f",r1,r2);

}





