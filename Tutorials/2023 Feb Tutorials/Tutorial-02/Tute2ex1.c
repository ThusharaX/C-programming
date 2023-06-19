//Exercise 1: Practice how to use variables in printf statement

#include <stdio.h>

int main(void)
{
    int x =2, y = 3;
    float z = 45.567;

    printf("*\n**\n***\n****\n*****\n");

    printf("%d\n", x + x);

    printf("x = \n");

    printf("x=%d\n", x);

    printf("%d = %d", x+y, y+x);
    /* printf( "%d", x+y ); */

    printf("\n");

    printf("value is %.2f\n", z);

    return 0;
}
