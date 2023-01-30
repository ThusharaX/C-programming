#include <stdio.h>

int main()
{
    int n,s=1;
    printf("Enter n: ");
    scanf("%d",&n);

    while(n>0){
        s*=n;
        n--;
    }

    printf("%d",s);
    return 0;
}
