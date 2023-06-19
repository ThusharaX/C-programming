#include <stdio.h>

int main(void)
{
    int marks, sum = 0, i = 1;

    while (i <= 4)
    {
        printf("Enter Module Marks: ");
        scanf("%d", &marks);

        sum = sum + marks;
        i++;
    }

    printf("Total Marks = %d\n", sum);

    return 0;
}
