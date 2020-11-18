#include <stdio.h>
#include <stdlib.h>


int main()
{

    //1
    printf("********\n");
    for(int i=0;i<4;i++){
        printf("*      *\n");
    }printf("********\n");

    //2
    char a[20] = "*";
    for(int j=0;j<6;j++){
        printf("%s\n",a);
        strcat(a, "*");
    }

    //3
    printf("  *\n ***\n*****\n");
    for(int k=3;k>0;k--){
        printf("%3s\n","*");
    }

    return 0;
}
