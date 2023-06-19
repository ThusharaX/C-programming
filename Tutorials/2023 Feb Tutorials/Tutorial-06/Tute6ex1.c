// Math library functions

#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("floor = %.2f\n", floor(7.5));
    printf("ceil = %.2f\n", ceil(0.0));
    printf("ceil with negative = %.2f\n", ceil(-6.4));
    printf("log10 = %.2f\n", log10(100));
    printf("ceil,floor = %.2f\n", ceil(floor(-5.5)));

    return 0;
}

// for more info >> ../codexample/mathstdlib.c
