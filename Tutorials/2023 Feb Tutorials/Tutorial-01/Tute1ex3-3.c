// Exersice 3 - 1
// Fahrehite to Celsius Calculate

#include <stdio.h>

int main (void)
{
    int fa, cels; //declaration

    printf("Enter Temperature(Celsius): "); //initialization
    scanf("%d", &cels);

    fa = (cels * 9/5) + 32; // Calculate  Fahrehite Value

    printf("Fahrehite = %d\n", fa); // output

    return 0;
}

