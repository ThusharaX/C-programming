#include <stdio.h>

int main()
{
    int a=0,b;
    char c[100];
    scanf("%s",&c);

    while(c[a]!='\0'){//only work for a single word, stop when meets a null value or a space
            b=c[a];
            printf("%c",b-32);
            a++;
       }

    return 0;
}
