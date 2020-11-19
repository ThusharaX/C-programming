#include <stdio.h>
#include <stdlib.h>


int main()
{
    //a)
    for(int i=1;i<8;i++)
        printf("%d ",i);


    printf("\n"); //New line

    //b)
    for(int i=3;i<25;i+=5)
        printf("%d ",i);

     printf("\n"); //New line

    //c)
    for(int i=20;i>(-11);i-=6)
        printf("%d ",i);

    return 0;
}
