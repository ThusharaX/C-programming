#include <stdio.h>
#include <stdlib.h>


int main()
{
    //top
    char a[10]="*";
    for(int i=0;i<7;i++){
        printf("%s\n",a);
        strcat(a, "*");//concatenating a[] with *
    }

    //bottom
    int b=7;
    for(int i=4;i>0;i--){
        for(int i=b;i>0;i--){
            printf("*");
        }
        printf("\n");
        b-=2;
    }

    return 0;
}
