#include <stdio.h>


//without if statement

int main(void)
{
    int count;
    float sum, num;

    printf("Enter Number: ");
    scanf("%f", &num);

    while (num >= 0) {

        sum = sum + num;
        printf("Sum: %.2f\n", sum);

        printf("Enter Number: ");
        scanf("%f", &num);

        count++;
    }

    printf("Average: %.2f\n", (sum / count));

    return 0;

}


