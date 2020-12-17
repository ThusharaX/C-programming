//Online Exam 02 - Resit
#include<stdio.h>
#include<assert.h>

// function prototype
double calculateAmount(int type, double initial);
void printDetails(int type, double initial, double balance);
int checkEligibility(double balance);

// main function
int main(void)
{
	// variable declaration 
	int type;
	int count = 1;
	int eligibility;
	double balance = 0;
	double initial;
	
	// begin while loop
	while (count <= 5) {
		
		// input account type & initial amount
		printf("Enter Account %d type : ", count);
		scanf("%d", &type);
		printf("Initial amount : ");
		scanf("%lf", &initial);
		
		balance = calculateAmount(type, initial);
		
		if (balance == -1) {
			printf("Invalid type\n\n");
			continue;
		}
		
		assert(checkEligibility(1000) == 2);
		assert(checkEligibility(5000) == 1);
		
		printDetails(type, initial, balance);
		
		count++;
	} // end while
		
    return 0;
}

// function implementation
double calculateAmount(int type, double initial) {
	double balance, interest;
	
	switch (type) {
		case 1 : balance = initial + (initial * 4 / 100);
		break;
		case 2 : balance = initial + (initial * 7 / 100);
		break;
		case 3 : balance = initial + (initial * 10 / 100);
		break;
		default : balance = -1;
	}
	
	return balance;

}

void printDetails(int type, double initial, double balance) {
	int eligibility;
	
	eligibility = checkEligibility(balance); // function call
	
	printf("\nAccount type : %d\n", type);
	printf("Initial Amount : %.2f\n", initial);
	printf("Amount of the account at the end of the year : %.2f\n", balance);
	
	if (eligibility == 1) {
		printf("Eligibility : Eligible\n");
	}
	else {
		printf("Eligibility : Not Eligible\n");
	}
	
	printf("\n");
}

int checkEligibility(double balance) {
	int eligibility = 2;
	
	if (balance >= 5000) {
		eligibility = 1;
	}
	
	return eligibility;
}
