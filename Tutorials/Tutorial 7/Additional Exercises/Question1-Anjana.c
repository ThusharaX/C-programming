#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i;
	
    //a)
    for(i=1;i<8;i++)
        printf("%d ",i);


    printf("\n"); //New line

    //b)
    for(i=3;i<25;i+=5)
        printf("%d ",i);

     printf("\n"); //New line

    //c)
    for(i=20;i>(-11);i-=6)
        printf("%d ",i);

    return 0;
}
