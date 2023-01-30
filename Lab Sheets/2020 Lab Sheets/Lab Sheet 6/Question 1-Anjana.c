#include <stdio.h>

int main()
{
    int c=20;
    char n[20]={0};
    scanf("%s",&n);

    while(c>=0){
        if(n[c]!='\0'){//ignore zero null values in array
            printf("%c",n[c]);
       }
       c--;
    }

    return 0;
}

