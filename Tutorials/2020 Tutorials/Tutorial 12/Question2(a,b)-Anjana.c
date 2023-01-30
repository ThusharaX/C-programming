#include <stdio.h>

int main()
{
    char n[10];
    char d;

    FILE *fptr;
    fptr = fopen("appointment.dat","w+");

    for(int i=0;i<5;i++){
        printf("Name: ");
        scanf(" %s",&n);
        printf("Type: ");
        scanf(" %c",&d);
        fprintf(fptr,"%s\t%c\n",n,d);
    }

    fclose(fptr);
    return 0;
}
