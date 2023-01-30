#include<stdio.h>

void solidSquare(int, char);

int main()
{
	int side = 0, count1, count2;
	char fillCharacter;
	
	printf("Side Value : ");
	scanf("%d", &side);
	printf("Fill Character : ");
	scanf(" %c", &fillCharacter);
	printf("\n");
	
	solidSquare(side, fillCharacter);
	
	return 0;
}

void solidSquare(int side, char fillCharacter) {
	int count1, count2;
	for (count1 = 1; count1 <= side; count1++){
		for (count2 = 1; count2 <= side; count2++){
			printf("%c", fillCharacter);
		}
		printf("\n");
	}
}
