#include <stdio.h>

int main(void)
{
    int numbers[10] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

    printf("%-9s %-7s %s \n", "Element", "Value", "Histogram");

    for(int i = 0; i < 10; i++)
    {
        printf("%-9d %-7d ", i, numbers[i]);

        for(int j = 1; j <= numbers[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
