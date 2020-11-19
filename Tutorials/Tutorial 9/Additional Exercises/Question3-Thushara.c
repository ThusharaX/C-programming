#include<stdio.h>
#include<assert.h>

int qualityPoints(int average);
void testQualityPoints();

int main() {
	int average, qualityPoint;
	
	printf("Student's average : ");
	scanf("%d", &average);
	
	testQualityPoints();
	qualityPoint = qualityPoints(average);
	printf("Quality Point : %d", qualityPoint);

	return 0;
}

int qualityPoints(int average) {
	
	if (100 >= average && average >= 90)
		return 4;
	else if (89 >= average && average >= 80)
		return 3;
	else if (79 >= average && average >= 70)
		return 2;
	else if (69 >= average && average >= 60)
		return 1;
	else if (60 > average)
		return 0;
}

void testQualityPoints() {
	assert(qualityPoints(100) == 4);
	assert(qualityPoints(90) == 4);
	assert(qualityPoints(89) == 3);
	assert(qualityPoints(80) == 3);
	assert(qualityPoints(79) == 2);
	assert(qualityPoints(70) == 2);
	assert(qualityPoints(69) == 1);
	assert(qualityPoints(60) == 1);
	assert(qualityPoints(59) == 0);
}
