//importing libraries
#include<stdio.h>
#include<string.h>

//starting main method
int main (void)
{
	//declaring variables
	int chance1 , chance2 , chance3 , count , exit1 , exit2;
	float transaction , old_balance , new_balance , amount = 0;
	char transaction_type , another_one , dummy , account , another_one_check ;
	
	//assigning the "y" value to the relevant variable (another_one) to keep the program transaction mood at the beggining
	another_one = 'Y';

//using repition program to keep the program intact
while (1)
{
	//assigning values to "chance1" , "chance2" and "chance3" variable to declare the remaining chances that the user has, if the entered an invalid charactor
	chance1 = 3;
	chance2 = 3;
	chance3 = 3;
	new_balance = 0;

	//using repititon statement to decide the state of the program
	while ( another_one == 'Y' || another_one == 'y')
	{
		if (chance1 == 3)
		{
			
		if (amount > 0)
		{
			//using a dummy char value the get the extra charactor
			dummy = getchar();
		}
		
		//asking the user to enter the Transaction Type and assign the entered charactor to the "transaction_type" variable
		printf("Enter the Transaction Type ( Withdrawal - W / Deposit - D ) : ");
		transaction_type = getchar();
		
		if (amount = 0)
		{
			//using a dummy char value the get the extra charactor
			dummy = getchar();
		}
	}
		
		//using selection statement to decide if the user has entered a valid variable 
		//and if not give the user some chances to enter a valid variable before terminate the program
		if ( transaction_type == 'W' || transaction_type == 'w')
		{
			printf("You have Selected Money Withdrawal!!!\n"); //the user has selected to withdraw money
			another_one = 'a'; // chance the "another_one" variable's value to exit the loop
		}
		else if ( transaction_type == 'D' || transaction_type == 'd')
		{
			printf("You have Selected Money Deposit!!!\n");//the user has selected to deposit money
			another_one = 'a'; // chance the "another_one" variable's value to exit the loop
		}
		else
		{
			//using a dummy char value the get the extra charactor
			dummy = getchar();
			
			chance1--;
			printf("Invalid Selection !!!\n");
			printf("You Entered : %c\n" , transaction_type);
			
			if (amount > 0)
			{
				//using a dummy char value the get the extra charactor
			dummy = getchar();
			}
			printf("Enter the Transaction Type ( W / D ) ( %d Chance(s) Left ) : " , chance1);
			transaction_type = getchar();
		
			if (amount = 0)
			{
				//using a dummy char value the get the extra charactor
				dummy = getchar();
			}
		}
		
		//if the user didn't enter a proper selection within the given chances, the program will be terminated
		if (chance1 == 1 )
		{
			printf("Invalid Selection -- Good-Bye!!!\n");
			return 0;
		}	
	}
	
	//selection statment to check if the user is using a new bank account or using the back account that the user used earlier (refer to the line 117)
	if ( count == 0 )
	{
		//asking the user to enter the bank balance and assign the value to the "old_balance" variable
		printf("Enter the Bank Balance : ");
		scanf("%f" , &old_balance);
	}
	
	//using selection statement to select the calculation for the new bank balance by the given transaction type
	//and also asking user to enter the withdraw / deposit amount and assign the value to the "amount" variable
	if ( transaction_type == 'W' || transaction_type == 'w' )
	{
		//asking the user to enter the withdrawal amount and assign the value to the "amount" variable
		printf("Enter the Withdrawal Amount : ");
		scanf("%f" , &amount);
		
		new_balance = old_balance - amount;
	}
	else if ( transaction_type == 'D' || transaction_type == 'd' )
	{
		//asking the user to enter the deposit amount and assign the value to the "amount" variable
		printf("Enter the deposit Amount : ");
		scanf("%f" , &amount);
		
		new_balance = old_balance + amount;
	}
	
	//using selection statement to cancel the transaction if the new bank balance hits a negative value
	if ( new_balance < 0 )
	{
		new_balance = 0;
		amount = 0;
		printf("Transaction Failed !!!\n");
		exit1 = 0;
		exit2 = 0;
		count = 0;
	}
	else
	{
		old_balance = new_balance;
	}
	
	//using selection statement to print the new bank balance if the transaction is valid
	if (amount > 0)
	{
		printf("Transaction Successful !!!\n");
		printf("Your Bank Balance is Rs.%.2f\n" , new_balance );
		exit1 = 0;
		exit2 = 0;
		count = 0;
	}
	
	//using repititon statement to keep the program intact until the user entered a valid character within several chances
	while ( exit1 == 0 )
	{
		if ( chance2 == 3)
		{
			//using a dummy char value the get the extra charactor
			dummy = getchar();
			
			printf("\n");
			//asking the user if the user wants to do another transcation and assgin the value to the "another_one_check" Variable
			printf("Do you want to do Another Transaction ( Yes - Y / No - N ) : ");
			another_one = getchar();
		}
		
		//using selection statement to terminate the program if the user doesn't want to do another transaction
		//to decide if the user has entered a valid variable 
		//and if not give the user some chances to enter a valid variable before terminate the program
		if ( another_one == 'N' || another_one == 'n' )
		{
			printf("\n");
			printf("Thank You For Using Our Service !!!\n");
			exit1++;
			return 0;
		}
		else if ( another_one == 'Y' || another_one == 'y' )
		{
			//using repititon statement to keep the program intact until the user entered a valid character within several chances
			while ( exit2 == 0 )
			{
				if ( chance3 = 3 )
				{
				//using a dummy char value the get the extra charactor
				dummy = getchar();
				
				//asking the user whether the user wants to use the same bank account or a new bank account
				printf("Do you want to Use the Same Bank Account ( Yes - Y / No - N ) : ");
				account = getchar();
				exit1++;
			
				//using selection statement to check if the user wants to use the same bank account or not
				if ( account == 'Y' || account == 'y' )
					{
						count++;
						exit2++;		
					}
					else if ( account == 'N' || account == 'n' )
					{
						exit2++;		
					}
				else
				{
					//printf("You Entered : %c and %c\n" , another_one , dummy);
					chance3--;
					printf("Invalid Selection !!!\n");
					printf("Do you want to Use the Same Bank Account ( Y / N ) ( %d Chance(s) Left ) : " , chance3);
					account = getchar();
				}
				}
			}
		}
		else 
		{
		//	printf("You Entered : %c and %c\n" , another_one , dummy);
			chance2--;
			printf("Invalid Selection !!!\n");
			printf("Do you want to do Another Transaction ( Y / N ) ( %d Chance(s) Left ) : " , chance2);
			another_one = getchar();
		
			//using a dummy char value the get the extra charactor
			dummy = getchar();
		}
		
		//if the user didn't enter a proper selection within the given chances, the program will be terminated
		if (chance2 == 1 )
		{
			printf("Invalid Selection -- Good-Bye!!!\n");
			return 0;
		}
	}
}

}
//ending main method

















