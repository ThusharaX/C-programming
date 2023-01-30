/*Assume that you are supposed to write a C program to update the bank balance of a customer
based on the transactions performed (withdrawals/ deposits) by the customer.
Implement the program by following the given steps.*/

#include <stdio.h>
int main(void)
{//FUNCTION MAIN BEGINS
	char transactiont;
	float balance, amount;
	
	printf("(Withdrawal = W / Deposits = D)\n");
	printf("Enter transaction type : ");
	transactiont = getchar(); //get transaction type
	printf("\n.......\n");
	
	  if(transactiont=='w' || transactiont=='W')
	    {
	    	printf("Enter the bank balance :");
	    	scanf("%f",&balance);//get balance
	    	
	    	printf("Enter amount : ");
	    	scanf("%f",&amount);//get amount
	    	
	    	balance=balance-amount;//calculation
	    	printf("New balance - %.2f",balance);//show new balance
	    	
		}
		
	  else if (transactiont=='d' || transactiont=='D')
	    {
	    	printf("Enter the bank balance :");
	    	scanf("%f",&balance);//get balance
	    	
	    	printf("Enter amount : ");
	    	scanf("%f",&amount);//get amount
	    	
	    	balance=balance+amount;//calculation
	    	printf("New balance - %.2f",balance);//show new balance
		}
		
	 else
	   {
	   	printf("\n::Error..::\n");
	   }

	
	return 0;
}// end of main function
