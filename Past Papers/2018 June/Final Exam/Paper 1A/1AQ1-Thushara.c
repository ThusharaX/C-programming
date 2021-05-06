/* Final Paper 2018
*  Question 1
*/

// including header files
#include<stdio.h>

void printDetails(float totRegFee[3], int noOfStd[3], int count);

// main function
int main(void) {
	
	// declaring variables
	char courseType, choice = 'y';
	int count;
	float totRegFee[3] = {0};
	int noOfStd[3] = {0};
	
	for (count = 0; count <= 100 && choice == 'y'; ) {
		printf("Course Type : ");
		scanf(" %c", &courseType);
		
		if (courseType == 'H' || courseType == 'h') {
			totRegFee[0] += 1500.00;
			noOfStd[0] += 1;
		}
		else if (courseType == 'M' || courseType == 'm') {
			totRegFee[1] += 2000.00;
			noOfStd[1] += 1;
		}
		else if (courseType == 'F' || courseType == 'f') {
			totRegFee[2] += 2500.00;
			noOfStd[2] += 1;
		}
		else {
			printf("Invalid Course type\n");
			continue;
		}
		
		printf("Do you want to add more ? (y/n) : ");
		scanf(" %c", &choice);
		if (choice == 'n') {
			break;
		}
		
		count ++;
	}
	
	for (count = 0; count < 3; count ++) {
		if (count == 0) {
			printf("\nDiploma in Hospitality Management\n");
		}
		else if (count == 1) {
			printf("\nDiploma in Marketing\n");
		}
		else if (count == 2) {
			printf("\nDiploma in Finance\n");
		}
		printDetails(totRegFee, noOfStd, count);
	}
	
	return 0;	
}

void printDetails(float totRegFee[3], int noOfStd[3], int count) {
	printf("\tTotal Registrations fee = %.2f", totRegFee[count]);
	printf("\n\tTotal no of Students = %d\n", noOfStd[count]);
}

