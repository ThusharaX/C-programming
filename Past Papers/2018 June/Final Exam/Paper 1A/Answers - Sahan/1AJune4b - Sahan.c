#include<stdio.h>
int main()
{
	int count, i;
	int empNumberInput;
	int empNumber;
	char name[10];
	char attendace[7];
	
	count=0;
	
	FILE * cfPtr;
	cfPtr = fopen("attendance.dat", "r");
	
	if(cfPtr == NULL) {
		printf("File cannot be open");
		return -1;
	}
	
	printf("Enter Employee Number: ");
	scanf("%d", &empNumberInput);
	
	fscanf(cfPtr,"%d%s%s", &empNumber, name, attendace);
	
	while(!feof(cfPtr)) {
		
		if(empNumber == empNumberInput) {
			break;
		}
		
		fscanf(cfPtr,"%d%s%s", &empNumber, name, attendace);
	}
	
	for (i = 0; i < 7; ++i) {
		
		if (attendace[i] == '1')
			++count;
	}
	printf("Number of days reported to work: %d", count);
	fclose(cfPtr);
	return 0;
}
