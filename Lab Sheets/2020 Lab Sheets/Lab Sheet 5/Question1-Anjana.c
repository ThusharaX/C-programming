#include <stdio.h>

int main()
{
    int a[]={25, 32, 45, 2, 13, 9, 6, 10, 17, 4};
    int b;
    int c=0;
    printf("Enter Number: ");
    scanf("%d",&b);

    for(int i=0;i<10;i++){
        if(a[i]==b){
            c=i;
            break;
        }
    }

    c>0 ? printf("Location in array: %d",c):printf("Value not found");

    return 0;
}


