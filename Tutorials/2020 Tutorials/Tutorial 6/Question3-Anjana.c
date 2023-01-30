#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if( ((a/10000)==(a%10)) && ( ((a%10000)/1000) ==((a%100)/10) ) )
        printf("Palindrome ");
    else
        printf("Not Palindrome");

    return 0;
}
