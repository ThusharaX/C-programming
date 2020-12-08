#include <stdio.h>

#define SALE 4
#define PRODUCT 5

int main()
{
	float salesProduct[SALE][PRODUCT] = {0};
	int i, j;
	float value;
	char choice = 'y';
	
	while (choice == 'y') {
		printf("\nEnter Salesperson Number(1-4) : ");
		scanf("%d", &i);
		printf("Enter Product Number(1-5) : ");
		scanf("%d", &j);
		printf("Enter Total dollar Value : $");
		scanf("%f", &value);
		
		if (i < 1 || j < 1 || i > 4 || j > 5) {
			printf("\nInvalid input!!!\n");
			continue;
		}
		
		salesProduct[i-1][j-1] = value;
		
		printf("\nIf you want to enter more, type 'y' : ");
		scanf(" %c", &choice);
		
		if (choice != 'y') {
			break;
		}
	}
	
	for (i = 0; i < SALE; i++) {
		for (j = 0; j < PRODUCT; j++) {
			printf("%d person's %d product sales $%.2f", i+1, j+1, salesProduct[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
