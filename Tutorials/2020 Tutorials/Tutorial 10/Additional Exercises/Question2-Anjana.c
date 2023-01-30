#include <stdio.h>


int main()
{
    int ar[]={19,3,15,7,11,9,13,5,17,1};
    printf("Element Value \tHistogram\n");

    for(int i=0; i<10; ++i){
        printf("%d \t%d\t",i,ar[i]);

        for(int j = ar[i];j>0;j--)
            printf("*");

    printf("\n");
    }

}
