#include <stdio.h>
#include <stdlib.h>


int main()
{
    char grade;
    printf("Enter Grade: ");
    scanf(" %c",&grade);


    if( grade=='A' )
        printf("Excellent");
    else if( grade=='B')
        printf("Good");
    else if( (grade=='C' || grade=='c') )
        printf("OK");
    else
        printf("Needs Improvement");

    return 0;
}
