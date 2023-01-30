#include <stdio.h>

int main()
{
    int a,b=1;
    char c[30];
    while(b==1){
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a==21||a==43||a==76||a==98||a==40){
            printf("Wrong number\n");
        }else
            b=0;
    }

    FILE *fptr;
    fptr = fopen("number.dat","a+");
    if(fptr==NULL)
    {
        printf("Error opening file");
        return(-1);
    }

    fprintf(fptr," %d",a);
    fclose(fptr);
    return 0;
}
