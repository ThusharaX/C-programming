#include<stdio.h>

int main()
{
	int side, count1, count2;
	
	printf("Side Value : ");
	scanf("%d", &side);
	printf("\n");
	
	for (count1 = 1; count1 <= side; count1++){
		for (count2 = 1; count2 <= side; count2++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
