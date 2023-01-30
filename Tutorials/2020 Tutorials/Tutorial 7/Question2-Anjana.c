#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char n[10];
    int m;
    char nn[10];
    int mm=0;
    int i;
    int j;

    for(i=0;i<3;i++){
        printf("Enter name: ");
        scanf(" %s",&n);
        int t = 0;

        for(j=0;j<4;j++){

            printf("Enter Mark: ");
            scanf(" %d",&m);
            t+=m;
        }

        printf("Total marks: %d\n",t);

        if(mm<t){
            mm=t;
            strncpy(nn, n, 10); //character copy from n to nn
        }
    }

    printf("Student with the highest is: %s with %d marks",nn,mm);

    return 0;
}
