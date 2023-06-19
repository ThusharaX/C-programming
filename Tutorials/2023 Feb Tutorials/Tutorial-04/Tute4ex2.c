/*
Exercise 2: Practice to write if… else statement

Assume that you are supposed to write a C program to update the bank balance of a customer
based on the transactions performed (withdrawals/ deposits) by the customer.

Implement the program by following the given steps.
i. Prompt the user to input transaction type (Withdrawal/ Deposit)
ii. Read the user input from the keyboard using getchar( ) function (w – withdrawals, d –
deposits)
iii. If the user input ‘w’ or ‘W’ , display message “You have selected to withdraw money”.
If the user input‘d’ or ‘D’, display message “You have selected to deposit money”.
Otherwise display an error message “You have selected an invalid transaction type”
and terminate the program.
iv. Modify the above program to input the bank balance and the amount.
v. Based on the selected transaction type (withdrawal or deposit), display the new balance.
*/

#include <stdio.h>

int main(void)
{
    char tran;
    // int tran;
    // Characters are normally stored in variable type char.
    // Characters can be stored in any integer type variable too
    float balance,amount;

    printf("Input transaction type(w-Withdrawal,d-Deposit): ");
    tran = getchar(); // for get transaction Type
    printf("\n"); // for blank line

    if (tran == 'w' || tran == 'W')
    {
        printf("You Have Selected to withdraw money.\n\n");
        printf("Enter Bank balance: Rs. ");
        scanf("%f", &balance); // for get balance
        printf("Enter Withdrawal amount: Rs. ");
        scanf("%f", &amount);
        printf("New Balance: Rs. %.2f\n", (balance - amount)); // calculate & show new balance
    }
    else if (tran == 'd' || tran == 'D')
    {
        printf("You have selected to deposit money.\n\n");
        printf("Enter Bank balance: Rs. ");
        scanf("%f", &balance); // for get balance
        printf("Enter Deposit amount: Rs. ");
        scanf("%f", &amount);
        printf("New Balance: Rs. %.2f\n", (balance + amount)); // calculate & show new balance
    }
    else
        printf("You have selected invalid transaction type.\n"); // show error message.

    return 0;

} // end of main function

