#include <stdio.h>

int main()
{
    char name[20],clas;
    int year;
    float GPA;

    FILE *fptr;
    fptr = fopen("Student.dat","w");

    fprintf(fptr,"Name\tClass\tYear\tGPA\n");

    for(int i=0;i<5;i++){
        scanf("%s %c %d %f", &name, &clas, &year, &GPA);
        fprintf(fptr, "%s\t%c\t%d\t%.1f \n", name, clas, year, GPA);
    }

    fclose(fptr);
    return 0;
}
