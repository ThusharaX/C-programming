#include <stdio.h>

int main()
{
    int a;
    printf("N\t10*N\t100*N\t1000*N\n");

    for(int i=0;i<10;i++){
        a=i+1;
        printf("%d\t%d\t%d\t%d\n",a,a*10,a*100,a*1000);
    }

    return 0;
}
