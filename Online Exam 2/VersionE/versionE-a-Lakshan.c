//Online Exam2 versionE
//including header files
#include <stdio.h>

//main function
int main()
{
    // declare and initializing variables
    int mark = 0, min = 0, max = 0;

    // input first mark
    printf("Enter Marks, -99 to terminate : ");
    scanf("%d", &mark);
    
    if(mark != -99)
    min =mark;

    while(mark != -99)
    {
        while (mark <= 100 && mark >= 0)
        {
            if(mark > max)
                max = mark;
            if(mark < min)
                min = mark;

            printf("Enter Marks, -99 to terminate : ");
            scanf("%d", &mark);
        }
        if(mark != -99)
        {
            //print an error message
            printf("Invalid mark, marks should be between 0 and 100\n");
            printf("Enter Marks, -99 to terminate : ");
            scanf("%d", &mark);
        }
    }

    //print minimum and maximum marks
    printf("Your minimum mark is : %d\n", min);
    printf("Your maximum mark is : %d\n", max);

    return 0;
}
//end main function
