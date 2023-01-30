#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;

    printf("Enter 5 digit number: ");
    scanf(" %d",&d);
    printf("%d %d %d %d %d",d/10000,(d%10000)/1000,(d%1000)/100,(d%100)/10,d%10 );

    return 0;
}
