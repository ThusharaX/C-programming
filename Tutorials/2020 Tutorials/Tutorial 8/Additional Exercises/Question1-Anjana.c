#include <stdio.h>
#include <stdlib.h>

void ab(int a);//i)function initialization
void abc(int c,char d);//ii)

int main()
{
    //i)
    int a=4;
    ab(a);//calling ab function

    printf("\n");

    //ii)
    int c=4;
    char fillCharacter = '#';
    abc(c,fillCharacter);//calling abc function

    return 0;
}

void ab(int a){
    int x=a;
    for(a;a>0;a--){
        for(int b=x;b>0;b--){
            printf("*");
        }
        printf("\n");
    }
}

void abc(int c,char d){
    int y=c;
    for(c;c>0;c--){
        for(int f=y;f>0;f--){
            printf("%c",d);
        }
        printf("\n");
    }
}




