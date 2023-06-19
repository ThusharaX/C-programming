#include <stdio.h>

int outputMarks(int stdMarks[10]); //function prototype
int mean(int stdMarks[10]);

int main(void)
{
    int stdMarks[10], i,marks;

    for(i = 0; i < 10; i++)
    {
        printf("Enter Student %d marks: ", i + 1);
        scanf("%d", &marks);

        if(marks > 0 && marks <= 20) // check marks is valid or not.
            stdMarks[i] = marks;
        else
        {
            printf("Invalid Input\n");
            i = i - 1; // to re-prompt
            continue;
        }
    }

    outputMarks(stdMarks); //calling the function

    printf("Mean = %d\n", mean(stdMarks));

    return 0;
}

int outputMarks(int stdMarks[10]) // stdMarks[] <-- also correct(bgc 6.2.2)
{
    printf("\n%10s %10s\n","Student Num", "Marks");

    for(int i = 0; i < 10; i++)
    {
        printf("%10d %10d\n", i + 1, stdMarks[i]);
    }

    return 0;
}

int mean(int stdMarks[10])
{
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        sum = sum + stdMarks[i];
    }

    return sum / 10;
}
