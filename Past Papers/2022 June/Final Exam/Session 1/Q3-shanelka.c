#include <stdio.h>
#include <assert.h>
#include <math.h>

// function declaration
float calclnterest (int FDType, float depositAmount);
float calcTax (float annualInterest);
void displayDetails (float annualInterest, float taxAmount);

// start the main function
int main(void) {
    // assert testing
    assert(fabs(calclnterest(1, 100.0) - 16.00) < 0.01);
    assert(fabs(calclnterest(2, 100.0) - 15.00) < 0.01);

    // variable declaratio
    int FDType;
    float annualInterest, taxAmount, depositAmount;
    int i; // counter variable

    printf("Type of FD,\n\t1\t12 month\n\t2\t24 month\n\t3\t36 month\n\t4\t48 month\n"); // display fd types
    printf("\nOr \"-1\" For Terminate Program\n\n");

    // get fd type and deposite amount
    printf("Fixed Deposit Type : ");
    scanf("%d", &FDType);

    while (FDType != -1) {
        printf("Deposit Amount : ");
        scanf("%f", &depositAmount);

        annualInterest = calclnterest (FDType, depositAmount);
        taxAmount = calcTax (annualInterest);
        displayDetails (annualInterest, taxAmount); // display function

        printf("\n\nFixed Deposit Type : ");
        scanf("%d", &FDType);

    } // end of loop

    return 0;
}

// function implementation
float calclnterest (int FDType, float depositAmount) {
    // local variable declaration
    float interestRate, annualInterest;

    // check the fd type and assign interest rate
    switch (FDType) {
        case 1 : {
            interestRate = 16.0 / 100; // 12 month fd
            break;
        }
        case 2 : {
            interestRate = 15.0 / 100; // 24 month fd
            break;
        }
        case 3 : {
            interestRate = 15.5 / 100; // 36 month fd
            break;
        }
        case 4 : {
            interestRate = 17.5 / 100; // 48 month fd
            break;
        }
    }

    // calculate annual interest
    annualInterest = depositAmount * interestRate;

    return annualInterest;
} // end of calcinterest function

float calcTax (float annualInterest) {
    // local variable declaration
    float taxAmount;

    // calculate tax
    taxAmount = annualInterest * 5.0 / 100;

    return taxAmount;
} // end of calctax function

void displayDetails (float annualInterest, float taxAmount) {
    // local variable declaration
    float amountPayable;

    // calculation
    amountPayable = annualInterest - taxAmount;

    // display details
    printf("\nAnnual Interest\tTax Amount\tAmount Payable\n");
    printf("%.2f\t\t%.2f\t\t%.2f\n", annualInterest, taxAmount, amountPayable);
} // end of displaydetails function