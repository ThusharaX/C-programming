// Please refer 2021 Feb Tutorial 8 Answer....
// https://www.programiz.com/c-programming/c-arrays-functions


#include <stdio.h>

#define SIZE 10

void outputMarks(int stdMarks[SIZE]); //function prototype

int main(void)
{
    int stdMarks[SIZE], i,marks;

    for(i = 0; i < SIZE; i++)
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

    return 0;
}

void outputMarks(int stdMarks[SIZE]) // stdMarks[] <-- also correct(bgc 6.2.2)
{
    printf("\n%10s %10s\n","Student Num", "Marks");

    for(int i = 0; i < SIZE; i++)
    {
        printf("%10d %10d\n", i + 1, stdMarks[i]);
    }
}
