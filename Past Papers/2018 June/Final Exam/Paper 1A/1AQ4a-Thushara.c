/* Final Paper 2018
*  Question 4 Part A
*/

// including header files
#include<stdio.h>

// main function
int main(void) {
	
	// declaring variables
	FILE *ptr;
	char empNum[10], empName[10];
	int status = 0;
	int emp, day;
	
	ptr = fopen("attendance.dat", "w");
	
	for (emp = 1; emp <= 2; emp++) {
		printf("Emp - %d\n", emp);
		printf("Employee Number : ");
		scanf(" %10s", empNum);
		printf("Employee Name : ");
		scanf(" %10s", empName);
		fprintf(ptr, "%s\t%s\t", empNum, empName);
		
		printf("\n0 for absent and 1 for present\n");
		for (day = 1;day <= 7; ) {
			printf("\tDay %d : ", day);
			scanf("%d", &status);
			if (status == 1 || status == 0) {
				fprintf(ptr, "%d ", status);
				day ++;
			}
		}
		fprintf(ptr, "\n");
	}
	
	fclose(ptr);
	
	return 0;
}






