#include <stdio.h>
#include <stdlib.h>


int main()
{   int a;
    printf("Enter Time in Seconds: ");
    scanf(" %d",&a);
    printf("HH:%d MM:%d SS:%d\n",a/3600,(a%3600)/60,a%60);


    return 0;
}
