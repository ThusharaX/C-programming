#include <stdio.h>
#include <stdlib.h>


int main()
{
    int c;
    int s;

    printf("Enter Employee category: ");
    scanf(" %d",&c);
    printf("Enter Employee Salary: ");
    scanf(" %d",&s);

    printf("Bonus :%.2f", 0.05*c*s   );

    return 0;
}
