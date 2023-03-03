#include <stdio.h>
int main()
{
	
	float marks,min,max;
	min = 101, max = 0;
	
	printf("Enter marks :");
	scanf("%f", &marks);
		
	while(marks != -99)
	{
		
		
		if(marks > 100 || marks < 0)
		{
			printf("Invalid marks Please re enter your marks---\n");
		}
		if(marks > max)
		{
			max = marks;
		}
		else if(marks < min)
		{
			min = marks;
		}
		
		printf("Enter marks :");
		scanf("%f", &marks);
	}
	
	printf("\nMax marks :%.2f", max);
	printf("\nMin marks :%.2f", min);
	return 0;
}
