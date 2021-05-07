/* Final Paper 2018
*  Question 4 Part B
*/

// including header files
#include<stdio.h>
#include<string.h>

// main function
int main(void) {
	
	// declaring variables
	FILE *ptr;
	char empNumU[10], empNumF[10], empName[10];
	int status[] = {0};
	int day, flag = 0, report = 0;
	
	ptr = fopen("attendance.dat", "r");
	
	printf("Employee Number : ");
	scanf(" %s", empNumU);

	while (!feof(ptr)) {
		fscanf(ptr, "%s%s", &empNumF, &empName);
		
		for (day = 1;day <= 7; day++) {
			fscanf(ptr, "%d", &status[day-1]);
		}
		
		if (!strcmp(empNumU, empNumF)) {
			flag = 1;
			break;
		}
	}
	
	for (day = 1; day <= 7; day ++) {
		if (flag == 1 && status[day - 1] == 1) {
			report += 1;
		}
	}
	
	printf("\nTotal No of days %s reported to work : %d", empNumU, report);
	
	fclose(ptr);
	
	return 0;
}






