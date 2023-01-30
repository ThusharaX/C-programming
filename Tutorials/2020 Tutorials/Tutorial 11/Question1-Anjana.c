#include <stdio.h>


int main()
{
    int a=1;

    char w[20];
    printf("enter a word: ");
    scanf("%s", &w);
    int l = strlen(w);

     for(int i=0;i<(l/2);i++){
        if(w[i]==w[(l-1)-i]){

        }else
            a=0;
            break;
     }

    a == 1 ? printf( "%s is a palindrome",w ) : printf( "%s is a not a palindrome",w );

    return 0;

}
