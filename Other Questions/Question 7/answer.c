#include <stdio.h>

// create a struct
struct customerDetails {
    char name[20], tType, accountNum[20];
    float amount;
} customer[5];

// start the main
int main(void) {
    float totalWithdrawal = 0, totalDeposit = 0;
    char *maxDName, *minWName; // max dipositer and withdrawer
    float maxDAmount = 0, minWAmount;
    int i; // counter variable

    // get data
    for (i = 0; i < 5; i++) {
        printf("Account Number : ");
        scanf("%s", customer[i].accountNum);

        printf("Name : ");
        scanf("%s", customer[i].name);

        printf("Transaction Type (W / D) : ");
        scanf(" %c", &customer[i].tType);

        printf("Amount : ");
        scanf("%f", &customer[i].amount);

        printf("\n");
    }

    // count total deposit and withdrawal amount and find max, min info
    minWAmount = customer[0].amount;
    minWName = customer[0].name;
    for (i = 0; i < 5; i++) {
        if ((customer[i].tType == 'W') || (customer[i].tType == 'w')) {
            totalWithdrawal += customer[i].amount;
            if (minWAmount > customer[i].amount) {
                minWAmount = customer[i].amount;
                minWName = customer[i].name;
            }
        }
        else if ((customer[i].tType == 'D') || (customer[i].tType == 'd')) {
            totalDeposit += customer[i].amount;
            if (maxDAmount < customer[i].amount) {
                maxDAmount = customer[i].amount;
                maxDName = customer[i].name;
            }
        }
    }

    // print details
    printf("\n\nTotal deposit amount = %.2f\n", totalDeposit);
    printf("Total withdrawal amount = %.2f\n", totalWithdrawal);
    printf("Maximum depositer = %s\n", maxDName);
    printf("Minimum withdrawer = %s\n", minWName);

    return 0;
} // end of main