#include <stdio.h>

int main()
{
    int c=0,s=0,t=0;
    char d;
    char n[20];
    FILE *fptr;
    fptr = fopen("appointment.dat","r");

    printf("Appointment Type\tNumber of Patients\n");
    for(int i=0;i<5;i++){
        fscanf(fptr,"%s %c\n",&n,&d);
        if(d=='C')
            c++;
        else if(d=='S')
            s++;
        else if(d=='T')
            t++;
    }

    printf("Consulting\t%d\n",c);
    printf("Scanning\t%d\n",s);
    printf("Testing\t%d\n",t);

    fclose(fptr);
    return 0;
}
