#include <stdio.h>
#include <stdlib.h>


int main()
{
    char a;
    printf("Enter Grade: ");
    scanf(" %c",&a);

    switch(a){

        case 'A':
        case 'a':
        printf("Excellent");
        break;

        case 'B':
        case 'b':
        printf("Good");
        break;

        case 'C':
        case 'c':
        printf("Satisfactory");
        break;

        case 'D':
        case 'd':
        printf("Needs Improvement");
        break;
    }

    return 0;
}
