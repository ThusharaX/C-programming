#include <stdio.h>

// begin main function
int main(void)
{
    int modCount = 1, marks, sum1 = 0, sum2 = 0, sum3 = 0; //declaration variables

    // for Get Student 01 Total marks
    while (modCount <= 4)
         {
             printf("Enter Student 01 Module %d Marks: ", modCount);
             scanf("%d", &marks);

             sum1 += marks;
             modCount++; // increment modCount
         }

    modCount = 1; // reset ModuleCount
    printf("Student 01 Total Marks = %d\n\n", sum1); // Display Student 1 toatal marks


    // for get Student 02 Total Marks
    while (modCount <= 4)
         {
             printf("Enter Student 02 Module %d Marks: ", modCount);
             scanf("%d", &marks);

             sum2 += marks;
             modCount++; // increment ModuleCount
         }
    modCount = 1; // reset ModuleCount
    printf("Student 02 Total Marks = %d\n\n", sum2);

    // for get student 03 Total marks
    while (modCount <= 4)
         {
             printf("Enter Student 03 Module %d Marks: ", modCount);
             scanf("%d", &marks);

             sum3 = sum3 + marks;
             modCount++; // increment ModuleCount
         }
    modCount = 1; // reset ModuleCount
    printf("Student 03 Total Marks = %d\n\n", sum3);

    // For find Highest Marks and Student
    if (sum1 > sum2 && sum2 > sum3)
        printf("Highest Marks = %d By Student 01\n", sum1);

    else if (sum2 > sum1 && sum2 > sum3)
        printf("Highest Marks = %d By Student 02\n", sum2);

    else if (sum3 > sum1 && sum3 > sum2)
        printf("Highest Marks = %d By Student 03\n", sum3);

    else if (sum1 == sum2 && sum2 > sum3)
        printf("Highest Marks = %d By Student 01 and 02\n", sum1);

    else if (sum1 == sum3 && sum3 > sum2)
        printf("Highest Marks = %d By Student 01 and 03\n", sum1);

    else if (sum2 == sum3 && sum3 > sum1)
        printf("highest Marks = %d By Student 02 and 03\n", sum2);

    else if (sum1 == sum2 && sum2 == sum3)
        printf("All students gets Equal marks\n");

    else
        printf("error\n");

    return 0;

}
