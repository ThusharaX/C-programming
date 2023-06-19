/*
Enter the gender and the age of a person from the keyboard and display
“SeniorMale” or “SeniorFemale”. Age greater than or equal to 65 is taken as
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int age;
    char gen[10];
    char ma[10] = "male";
    char fe[10] = "female";

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter Gender: ");
    scanf("%s", gen);

    int comp = strcmp(gen, ma);
    int comp2 = strcmp(gen, fe);

    if (age >= 65 && comp == 0)
        printf("Senior Male\n");
    else if (age >= 65 && comp2 == 0)
        printf("Senior Female\n");
    else
        printf("Failed");

    return 0;

}
