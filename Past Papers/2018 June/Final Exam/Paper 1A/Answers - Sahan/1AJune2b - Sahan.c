#include<stdio.h>
int main()
{
	int i, j;
	char led[4][4];
	
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j) {
			printf("Enter the colour for %d row x %d column LED bulb(R/G/B): ", i+1, j+1);
			scanf("%c%*c", &led[i][j]);
			
			while (led[i][j] != 'R' && led[i][j] != 'G' && led[i][j] != 'B') {
				printf("Invalid Input!\nEnter the colour for %d row x %d column LED bulb(R/G/B): ", i+1, j+1);
				scanf("%c%*c", &led[i][j]);
			}
		}
	}
	
	printf("\n");
	
	for(i = 0; i < 4; ++i) {
		for(j = 0; j < 4; ++j) {
			printf(" %c ", led[i][j]);
		}
		printf("\n");
	}
	
	printf("\nRed LED bulb positions:\n");
	
	for(i = 0; i < 4; ++i) {
		for(j = 0; j < 4; ++j) {
			
			if(led[i][j] == 'R')
				printf("[%d,%d] ", i, j);
		}
	}
	return 0;
}
