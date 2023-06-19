#include <stdio.h>

int main(void)
{
    int mark1, mark2, avg;

    printf("Enter Sub 1 Mark: ");
    scanf("%d", &mark1);

    printf("Enter Sub 2 Mark: ");
    scanf("%d", &mark2);

    avg = (mark1 + mark2) /2;

    if ( avg >= 45)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;

}
