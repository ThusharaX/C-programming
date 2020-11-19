#include <stdio.h>
#include <stdlib.h>


int main()
{
    char a;
    printf("Enter Grade: ");
    scanf(" %c",&a);

    if( a=='A' || a=='a' )
        printf("Excellent");
    else if( (a=='B' || a=='b') )
        printf("Good");
    else if( (a=='C' || a=='c') )
        printf("Satisfactory");
    else if( (a=='D' || a=='d') )
        printf("Needs Improvement");

    return 0;
}
