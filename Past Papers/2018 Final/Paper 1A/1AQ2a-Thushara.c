/* Final Paper 2018
*  Question 2 Part A
*/

// including header files
#include<stdio.h>
#include<string.h>

#define CUSTOMER 5

struct customer {
	int accountNum;
	char name[10];
	char transType;
	float amount;
} cust[CUSTOMER];

// main function
int main(void) {
	
	int count;
	float totalDamount = 0, totalWamount = 0;
	float maxDamount, minWamount;
	char maxDname[10], minWname[10];
	
	for (count = 0; count < CUSTOMER; count++) {
		printf("Account Number : ");
		scanf("%d", &cust[count].accountNum);
		printf("Customer Name : ");
		scanf(" %s", cust[count].name);
		printf("Transaction type : ");
		scanf(" %c", &cust[count].transType);
		printf("Amount : ");
		scanf("%f", &cust[count].amount);
	}
	
	maxDamount = cust[0].amount;
	minWamount = cust[0].amount;
	
	// Calculate total deposit and  total withdrawal
	// Find max D amount and min W amount
	for (count = 0; count < CUSTOMER; count++) {
		if (cust[count].transType == 'D' || cust[count].transType == 'd') {
			totalDamount += cust[count].amount;
			if (cust[count].amount > maxDamount) {
				maxDamount = cust[count].amount;
			}
		}
		else if (cust[count].transType == 'W' || cust[count].transType == 'w') {
			totalWamount += cust[count].amount;
			if (cust[count].amount < minWamount) {
				minWamount = cust[count].amount;
			}
		}
	}
	
	for (count = 0; count < CUSTOMER; count++) {
		if (cust[count].amount == maxDamount) {
			strcpy(maxDname, cust[count].name);
		}
		else if (cust[count].amount == minWamount) {
			strcpy(minWname, cust[count].name);
		}
	}
	
	printf("\n\nTotal Deposit Amount : %.2f\n", totalDamount);
	printf("Total Withdrawal Amount : %.2f\n", totalWamount);
	printf("Max deposit customer : %s\n", maxDname);
	printf("Min withdrawn customer : %s\n", minWname);
	
	return 0;	
}





