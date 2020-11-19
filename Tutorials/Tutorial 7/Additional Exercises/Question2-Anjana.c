#include <stdio.h>
#include <stdlib.h>


int main()
{
    int r=1;
    float t;
    int p;
    float d;

    while(r==1){
    printf("Package No: ");
    scanf(" %d",&p);
    if(p>0 && p<5){
    printf("Total Distance: ");
    scanf(" %f",&d);


    if(p==1)
        t= 150 + 175*(d-1);
    else if(p==2)
        t= 100*d;
    else if(p==3)
        t= 130 + 150*(d-1);
    else if(p==4)
        t= 120 + 130*(d-1);

    printf("Total Amount: Rs.%.2f\n",t);

    }else
        printf("Invalid Package Number");

    char n;
    printf("Do  you  have  more customers? ");
    scanf(" %c",&n);
    if(n=='y' || n=='Y')
        r=1;
    else if((n=='n' || n=='N'))
        r=0;

    }//end of while
    return 0;
}
