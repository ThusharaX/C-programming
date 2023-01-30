#include <stdio.h>
#include <stdlib.h>

int add(int a,int b);//function initialization
int multiply(int a,int b);
int square(int a);

int main()
{
    int c = multiply(3,4);
    int d = multiply(5,7);
    int f = add(c,d);
    int g = square(f);

    printf("%d", g );
    return 0;
}

int add(int a,int b){
    return( a+b );
}
int multiply(int a,int b){
    return( a*b );
}
int square(int a){
    return( pow(a,2) );
}
