#include<stdio.h>
int main()
{
	int i, j;
	char empNumber[3];
	char name[8];
	int attendance;
	
	FILE * cfPtr;
	cfPtr = fopen("attendance.dat", "w");
	
	if(cfPtr == NULL) {
		printf("File cannot be create");
		return -1;
	}
	
	for(i = 1; i <= 2; ++i) {
		printf("Enter Employee Number: ");
		scanf("%s", empNumber);
		printf("Enter Employee Name: ");
		scanf("%s", name);
		
		fprintf(cfPtr,"%s\t%s\t", empNumber, name);
		
		for(j = 1; j <= 7; ++j) {
			printf("Attendance Status for day %d(0/1): ", j);
			scanf("%d", &attendance);
			
			fprintf(cfPtr,"%d", attendance);
		}
		printf("\n");
		fprintf(cfPtr,"\n");
	}
	fclose(cfPtr);
	
	return 0;
}
