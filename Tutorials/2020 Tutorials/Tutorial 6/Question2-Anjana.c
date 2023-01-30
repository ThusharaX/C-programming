#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a%2==0)
        printf("even number");
    else
        printf("odd number");

    return 0;
}
