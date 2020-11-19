#include<stdio.h>
//#include <string.h>
#include <assert.h>

float calcFinalMark(float assignmentMark, float paperMark){
	float finalMark;
	assignmentMark = assignmentMark * 30 / 100;
	paperMark = paperMark * 70 / 100;
	finalMark = assignmentMark + paperMark;
	return finalMark;
}

char findGrades(float finalMark){
	char grade = 'F';
	if (finalMark >= 75)
		grade = 'A';
	else if (finalMark >= 60)
		grade = 'B';
	else if (finalMark >= 50)
		grade = 'C';
	return grade;
}

void printDetails(char name[],float assignmentMark, float paperMark){
	float finalMark;
	char grade;
	
	assert(calcFinalMark(50, 50) == 50);
	finalMark = calcFinalMark(assignmentMark, paperMark);
	
	assert(findGrades(50) == 'C');
	grade = findGrades(finalMark);
	
	printf("\n\t\tName\t\tFinal Mark\t\tGrade\t\t\n");
	printf("\t\t----\t\t----------\t\t-----\t\t\n");
	printf("\t\t%s\t\t%.2f\t\t\t%c\t\t\n", name,finalMark, grade);
}



int main()
{
	float assignmentMark = 0, paperMark = 0;
	char name[20];
	int count = 0;
	
	for (count = 1; count <= 5; count++){
		printf("Name : ");
		scanf(" %s", name);
		printf("Assignment Mark (out of 100) : ");
		scanf("%f", &assignmentMark);
		if (assignmentMark >= 50) {
			printf("Paper Mark (out of 100) : ");
			scanf("%f", &paperMark);
		}
		else
			paperMark = 0;
		
		printDetails(name, assignmentMark, paperMark);
		printf("\n");
	}
	
	return 0;
}
