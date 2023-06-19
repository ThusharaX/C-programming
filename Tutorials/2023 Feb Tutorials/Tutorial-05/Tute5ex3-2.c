#include <stdio.h>

int main(void)
{
    int marks, sum = 0, moduleCount = 1, stdCount = 1;

    while (stdCount <= 3)
    {
        while (moduleCount <= 4)
        {
            printf("Enter Student 0%d Module %d Marks: ", stdCount, moduleCount);
            scanf("%d", &marks);

            sum += marks;
            moduleCount++; // increment moduleCount
        }

        printf("Student 0%d Total Marks = %d\n\n", stdCount, sum);

        moduleCount = 1; // reset moduleCount
        sum = 0; // reset sum value
        stdCount++; // increment stdCount
    }

    return 0;
}
