#include <stdio.h>

int main()
{
    char c[30];

    FILE *fptr;
    fptr = fopen("number.dat","r");

    if(fptr==NULL)
    {
        printf("Error opening file");
        return -1;
    }

    fgets(c,30,fptr);
    printf("%s",c);

    fclose(fptr);
    return 0;
}
