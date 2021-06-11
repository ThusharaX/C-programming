#include<stdio.h>

//define structure
struct acc_number
{
	int account_no[5];
	char name[50][10];
	char type[5];
	float amount[5] , max_dep_amount , min_with_amount , total_deposit , total_withdraw;
	int i , max_dep_name_no , min_with_name_no;
}bank1;

int main (void)
{
	//setting values for relevent variables
	bank1.max_dep_amount = -100000;
	bank1.min_with_amount = 1000000;
	
	bank1.total_deposit = 0;
	bank1.total_withdraw = 0;
	
	//for loop for take 5 inputs
	for (bank1.i = 0 ; bank1.i < 5 ; bank1.i++)
	{
		printf("User No %d\n" , bank1.i + 1);
	
		printf("Enter the account number : ");
		scanf("%d" , &bank1.account_no[bank1.i]);
		
		printf("Enter the Name : ");
		scanf("%s%*c" , bank1.name[bank1.i]);
		
		printf("Enter the transaction type (W/D) : ");
		scanf("%c%*c" , &bank1.type[bank1.i]);
		
		printf("Enter the transaction amount : ");
		scanf("%f" , &bank1.amount[bank1.i]);
		
		//selection the transaction type and calculating the max and min bank balance
		if (bank1.type[bank1.i] == 'w' || bank1.type[bank1.i] == 'W')
		{
			bank1.total_withdraw += bank1.amount[bank1.i];
			
			if (bank1.min_with_amount > bank1.amount[bank1.i] )
			{
				bank1.min_with_amount = bank1.amount[bank1.i];
				bank1.min_with_name_no = bank1.i;
			}
		}
		else if (bank1.type[bank1.i] == 'd' || bank1.type[bank1.i] == 'D')
		{
			bank1.total_deposit += bank1.amount[bank1.i];
			
			if (bank1.max_dep_amount < bank1.amount[bank1.i] )
			{
				bank1.max_dep_amount = bank1.amount[bank1.i];
				bank1.max_dep_name_no = bank1.i;
			}
		}
		printf("\n");
	}
	
	//printing details
	printf("\n");
	printf("Total deposit amount : %.2f\n" , bank1.total_deposit);
	printf("Total withdraw amount : %.2f\n" , bank1.total_withdraw);
	printf("Name of the customer with the maximum deposit amount : %s\n" , bank1.name[bank1.max_dep_name_no]);
	printf("Name of the customer with the minimum withdraw amount : %s\n" , bank1.name[bank1.min_with_name_no]);
	
	
	return 0;
}
