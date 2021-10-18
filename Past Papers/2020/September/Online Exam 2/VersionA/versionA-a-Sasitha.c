#include<stdio.h>

int main()
{
    //Declaring variables
    int a=0,b=0;
    //For loop 01
    for(a=1; a<6; ++a){
        //For loop 02
        for(b=1; b<=a; ++b){
            printf("%c ",a+96);
        }
        //End of For loop 02
        printf("\n");
    }
    //End of For loop 01
    return 0;
}
