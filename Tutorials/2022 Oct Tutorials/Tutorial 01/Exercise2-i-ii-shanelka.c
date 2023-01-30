#include <stdio.h>

// start of the main function
int main(void) {
    // declaration variables
    int length, width, perimeter, area;

    printf("Hello World\n"); // print somthing something

    printf("Enter width of rectangle : "); //display message
    scanf("%d", &width); // scan and initialization to width

    printf("Enter length of rectangle : "); // display message
    scanf("%d", &length); // scan and initialization to length

    // calculation
    area = width * length;
    perimeter = (width + length) * 2;

    printf("Perimeter of the rectangle = %d\n", perimeter); // display perimeter
    printf("Area of the rectangle = %d", area); // display area

    return 0;
} // end of main