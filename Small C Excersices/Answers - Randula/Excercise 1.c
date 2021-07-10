#include<stdio.h>

int main (void)
{
	int no1 , no2;
	float average;
	
	printf("Enter Number 1 and Number: ");
	scanf("%d %d" , &no1 , &no2);
	
	average = (float) (no1 + no2) / 2;
	
	printf("\n");
	printf("The Average is : %.2f\n" , average);
	
	
	return 0;
}
