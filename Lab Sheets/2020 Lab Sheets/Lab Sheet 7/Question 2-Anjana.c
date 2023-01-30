#include <stdio.h>

int main()
{
    int y;
    char name[20],clas;
    int year;
    float GPA;
    int c=1;

    FILE *fptr;
    fptr = fopen("Student.dat","r");

    printf("Enter Year: ");
    scanf("%d",&y);

    //ignore the first line
    fscanf(fptr,"%s %s %s %s", &name, &clas, &year, &GPA);

    while(!feof(fptr)){
        fscanf(fptr,"%s %c %d %f", &name, &clas, &year, &GPA);

        if(year==y){
            printf("Name: %s GPA: %.1f",name,GPA);
            break;
        }
    }

    fclose(fptr);
    return 0;
}
