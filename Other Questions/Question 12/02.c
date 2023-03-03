#include <stdio.h>
#include <math.h>

float findradianvalue(float angleindegrees);
void printradianvalues(float angleindegrees, float radians);

int main()
{
	float angleindegrees, radians;
	
	printf("Angles(Degrees)\tAngles(Radians)\n");
	radians = findradianvalue(angleindegrees);
	printradianvalues( angleindegrees,  radians);
	return 0;
}

float findradianvalue(float angleindegrees)
{
	float radians;
	 radians = 22/(7.0 * 180.0 ) * angleindegrees;
	return radians;
}

void printradianvalues(float angleindegrees, float radians)
{
	int i;
	
	angleindegrees = 100;
	for(i=1;i<=6;i++)
	{	
		printf("%.0f\t\t%.2f\n\n",angleindegrees,radians);
		angleindegrees = angleindegrees + 20;
		
	}
	return ;
}
