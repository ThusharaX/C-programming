#include<stdio.h>

float findRadianValue(float angleInDegrees);
void printRadianValues(void);

int main (void)
{
	printRadianValues();
	return 0;
}

float findRadianValue(float angleInDegrees)
{
	float angleInradian;
	
	angleInradian = angleInDegrees / 180 * 22.0 / 7;
	
	return angleInradian;
}
void printRadianValues(void)
{
	int i;
	float radian;
	
	printf("Angle(degree)\tAngle(radians)\n");
	
	for (i = 100 ; i <= 200 ; i += 20)
	{
		radian = findRadianValue(i);
		printf("%d%17.2f\n" , i , radian);
	}
	
}

