#include<stdio.h>
#include<assert.h>

//function prototypes
double calculateAmount(int type , double initial);
void printDetails(int type , double initial , double balance);
int checkEligibility(double balance);
void testCheckEligibility();

int main ()
{
	//call test function
	testCheckEligibility();
	
	//declaring variables
	int accType , i , eligibility;
	float initial , balance;	
	
	for (i = 0 ; i < 5 ; i++)
	{
		//taking user inputs about saving account type
		printf("Enter saving account type : ");
		scanf("%d" , &accType);
		
		if (accType < 1 || accType > 5)
		{
			printf("Invalid Input!!\n");
			continue;
		}
	
		//taking user inputs about the initial value
		printf("Enter the Initial Value : ");
		scanf("%f" , &initial);
		
		//calculate the balance by the calling function
		balance = calculateAmount(accType , initial);
		
		//print the detials by calling function
		printDetails(accType , initial , balance);
		
		//check the eligibility and print the details
		eligibility = checkEligibility(balance);
		
		printf("Eligibility  : ");
		if (eligibility == 1)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		printf("\n");
	}
	return 0;
}

//called functions
double calculateAmount(int type , double initial)
{
	float annualRate , interest;
	
	if (type == 1)
	{
		annualRate = 4.0 / 100;
	}
	else if (type == 2)
	{
		annualRate = 7.0 / 100;
	}
	else
	{
		annualRate = 10.0 / 100;
	}
	
	interest = initial * annualRate;
	
	return (initial + interest);
}

void printDetails(int type , double initial , double balance)
{
	printf("Type : %d\n" , type);
	printf("Initial Value : %.2f\n" , initial);
	printf("Final Balance : %.2f\n" , balance);
}

int checkEligibility(double balance)
{
	if (balance >= 5000)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}

void testCheckEligibility()
{
	//assert functions
	assert(checkEligibility(6000) == 1);
	assert(checkEligibility(3000) == 2);
}
