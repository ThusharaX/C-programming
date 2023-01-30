#include <stdio.h>

int main()
{
    char a='*';

    ///(a)
    for(int i=0;i<10;i++){
        for(int j=i+1;j>0;j--)
            printf("%c",a);
        printf("\n");
    }

    printf("\n");

    ///(b)
    for(int i=0;i<10;i++){
        for(int j=10-i;j>0;j--)
            printf("%c",a);
        printf("\n");
    }

    return 0;
}
