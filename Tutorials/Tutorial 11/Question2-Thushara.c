#include<stdio.h>
#include<string.h>

#define SIZE 4

int main(void)
{
	int A[SIZE][SIZE] = { {5,7,8,10},
						{9,3,0,6},
						{8,1,9,2},
						{4,7,2,1} };
						
	int B[SIZE][SIZE] = { {2,2,1,3},
						{8,1,3,1},
						{1,2,2,4},
						{3,1,1,2} };
	int C[SIZE][SIZE];
	int a, b;
				
	for (a = 0; a < SIZE; a++) {
		for (b = 0; b < SIZE; b++) {
			C[a][b] = A[a][b] + B[a][b];
			printf("%d ", C[a][b]);
		}
		printf("\n");
	}
	
	return 0;
}
