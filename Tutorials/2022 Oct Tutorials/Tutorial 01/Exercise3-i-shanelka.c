#include <stdio.h>

// start the main
int main(void) {
    // variable declaration
    float celsius, fahrenheit;

    // get celsius value
    printf("Enter celsius temparature : ");
    scanf("%f", &celsius);

    // calculation
    fahrenheit = celsius * (9/5.0) + 32;

    // displaye fahrenheit temp
    printf("%.2f C = %.2f F", celsius, fahrenheit);

    return 0;
} // end of main function