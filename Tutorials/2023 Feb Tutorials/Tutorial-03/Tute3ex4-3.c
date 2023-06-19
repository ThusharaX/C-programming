/*
Enter the mark obtained for IP module and display the grade based on the
*/

#include<stdio.h>

int main(void)
{
    int mark;

    printf("Enter Your Marks: ");
    scanf("%d", &mark);

    if (100 >= mark && 80 <= mark)
        printf("Your Grade is A\n");
    else if (79 >= mark && 70 <= mark)
        printf("Your Grade is B\n");
    else if (69 >= mark && 45 <= mark)
        printf("Your Grade is C\n");
    else if (45 > mark)
        printf("Your Grade is F\n");
    else
        printf("Invalid Input\n");

    return 0;
}
