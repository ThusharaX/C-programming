#include<stdio.h>
#include<string.h>  // String header file

int main()
{
	char  empCat;
    int numOfHours;
    float salary = 0, tax = 0;

    char choice[] = "yes";

    while (strcmp(choice, "yes") == 0) {

        printf("Employee Category : ");
        scanf(" %c", &empCat);
        printf("Number of Hours : ");
        scanf("%d", &numOfHours);
        
        switch (empCat) {
            case 'A' :
                salary = numOfHours * 600.00;
                break;
            case 'B' :
                salary = numOfHours * 450.00;
                break;
            case 'C' :
                salary = numOfHours * 300.00;
                break;
            default :
                printf("Invalid Category\n");
        }

        printf("Salary : %.2f\n", salary);

        if (salary >= 50000.00) {
            tax = salary * 4 / 100;
        }
        else if (salary >= 25000.00) {
            tax = salary * 2 / 100;
        }

        printf("Tax : %.2f\n", tax);

        printf("Do you want to calculate again ? (yes/no) : ");
        scanf(" %s", &choice);

        salary, tax = 0, 0;
        printf("\n");
    }

	return 0;
}