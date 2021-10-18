#include<stdio.h>

int main ()
{
	float distance , amount = 0;
	
	printf("Enter the Distance : ");
	scanf("%f" , &distance);
	
	if (distance <= 30)
	{
		amount = distance * 50;
	}
	else
	{
		amount = (30 * 50) + ( (distance - 30) * 40);
	}
	
	printf("\n");
	printf("Amount : %.2f\n" , amount);
	
	
	return 0;
}
