/* Final Paper 2018
*  Question 2 Part A
*/

// including header files
#include<stdio.h>
#include<string.h>

#define STUDENT 5

struct student {
	int accountNum;
	char name[10];
	char transType;
	float amount;
} std[STUDENT];

// main function
int main(void) {
	
//	struct student std[STUDENT];
	int count;
	float totalDamount = 0, totalWamount = 0;
	float maxDamount, minWamount;
	char maxDname[10], minWname[10];
	
	for (count = 0; count < STUDENT; count++) {
		printf("Account Number : ");
		scanf("%d", &std[count].accountNum);
		printf("Customer Name : ");
		scanf(" %s", std[count].name);
		printf("Transaction type : ");
		scanf(" %c", &std[count].transType);
		printf("Amount : ");
		scanf("%f", &std[count].amount);
	}
	
	maxDamount = std[0].amount;
	minWamount = std[0].amount;
	
	// Calculate total deposit and  total withdrawal
	// Find max D amount and min W amount
	for (count = 0; count < STUDENT; count++) {
		if (std[count].transType == 'D' || std[count].transType == 'd') {
			totalDamount += std[count].amount;
			if (std[count].amount > maxDamount) {
				maxDamount = std[count].amount;
			}
		}
		else if (std[count].transType == 'W' || std[count].transType == 'w') {
			totalWamount += std[count].amount;
			if (std[count].amount < minWamount) {
				minWamount = std[count].amount;
			}
		}
	}
	
	for (count = 0; count < STUDENT; count++) {
		if (std[count].amount == maxDamount) {
			strcpy(maxDname, std[count].name);
		}
		else if (std[count].amount == minWamount) {
			strcpy(minWname, std[count].name);
		}
	}
	
	printf("\n\nTotal Deposit Amount : %.2f\n", totalDamount);
	printf("Total Withdrawal Amount : %.2f\n", totalWamount);
	printf("Max deposit customer : %s\n", maxDname);
	printf("Min withdrawn customer : %s\n", minWname);
	
	return 0;	
}





