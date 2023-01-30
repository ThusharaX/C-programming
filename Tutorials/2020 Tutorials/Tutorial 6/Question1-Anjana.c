#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a>0)
        printf("number is positive");
    else if(a==0)
        printf("number is zero");
    else
        printf("number is negative");

    return 0;
}
