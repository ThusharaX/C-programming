#include<stdio.h>

void solidSquare(int);

int main()
{
	int side;
	
	printf("Side Value : ");
	scanf("%d", &side);
	printf("\n");
	
	solidSquare(side);
	
	return 0;
}

void solidSquare(int side) {
	int count1, count2;
	for (count1 = 1; count1 <= side; count1++){
		for (count2 = 1; count2 <= side; count2++){
			printf("*");
		}
		printf("\n");
	}
}
