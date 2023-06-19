#include<stdio.h>

int main(void)
{
    int i, j, k, m;

    i = 1;
    j = 2;
    k = 4;
    m = 0;

    printf("%d\n", i == 1);

    printf("%d\n", j == 3);

    printf("%d\n", i  >=  1  &&  j < 4);

    printf("%d\n", k + m < j || 3 - j  >=  k);

    printf("%d\n", !m);

    printf("%d\n", !( j - m ));

    return 0;
}



