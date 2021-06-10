#include<stdio.h>
int main()
{
	int i;
	char type;
	int course[3] = {0,0,0};
	
	printf("Press E to exit.\n");
	
	for (i = 0; i <= 100; ++i)
	{
		printf("Enter course type(H/M/F): ");
		scanf("%c%*c", &type);
	
		if (type == 'E' || type == 'e')
			break;
		
		else if (type == 'H' || type == 'h')
			++course[0];
		
		else if (type == 'M' || type == 'm')
			++course[1];
		
		else if (type == 'F' || type == 'f')
			++course[2];
		
		else {
			printf("Invalid Input!\n");
			--i;
		}
	}
	
	printf("\nCourse\tNo of students\tTotal income");
	printf("\nH\t%d\t\t%.2f", course[0], course[0] * 1500.00);
	printf("\nM\t%d\t\t%.2f", course[1], course[1] * 2000.00);
	printf("\nF\t%d\t\t%.2f", course[2], course[2] * 2500.00);
	
	return 0;
}
