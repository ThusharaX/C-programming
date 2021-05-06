#include<stdio.h>

//Declare function calcIncrement
float calcIncrement(float salary, int nooofYearsWorked)
{
    //Declare variables
    float increment;
    //Calculation
    increment = salary * 10/100;
    return increment;
}
//Declare function calcToSalary;
float calcToSalary(float salary, float increment)
{
    //Declare variables
    float Totalsalary,incrementGiven;
    //Calculation
    Totalsalary = salary + increment;
}
//Main
int main()
{
    //Declare variables
    float salary,increment;
    int workTime;
    //Getting user inputs
    printf("Enter Salary : ");
    scanf("%f", &salary);
    printf("Enter Number of years worked : ");
    scanf("%d", &workTime);

    if(workTime >= 2)
    {
        increment = calcIncrement(salary, increment);
        printf("Increment : %.2f\n", increment);
    }
    else
    {
        printf("Increment : No Increment\n");
    }
    salary = calcToSalary(salary, increment);
    printf("Total Salary : %.2f\n", salary);
}
//End of main
