#include <stdio.h>

int main()
{
    int A[]={10, 20, 30, 40, 50};
    int B[]= {34, 67, 12, 89, 12};
    int C[5];

    for(int i=0;i<5;i++){
        C[i]=A[i]*B[i];
    }

    return 0;
}


