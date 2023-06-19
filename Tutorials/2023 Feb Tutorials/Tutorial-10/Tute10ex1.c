#include <stdio.h>

int main(void)
{
    FILE *number;

    int num, input;

    number = fopen("number.dat", "r+");

    if (number == NULL)
    {
        printf("File cannot be open");
        return -1;
    }

    printf("Enter Number: ");
    scanf("%d", &input);

    do
    {
        fscanf(number, "%d", &num);

        if(num == input)
        {
            printf("Number Already in the file.!");
            return 0;
        }

    } while(!feof(number));

    fprintf(number,"%d", input);

    fclose(number);

    return 0;
}
