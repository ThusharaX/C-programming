#include <stdio.h>

int main(void)
{
    int motion[5];
    int temp;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter Value %d: ", i + 1);
        scanf("%d", &motion[i]);
    }

    printf("Initial Value\t");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", motion[i]);
    }

    temp = motion[0];

    for(int j = 0; j < 5; j++)
    {
        if(j == 4)
        {
            motion[j] = temp;
        }
        else
        {
            motion[j] = motion[j + 1];
        }
    }

    printf("\nRotated Value\t");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", motion[i]);
    }

    return 0;
}
