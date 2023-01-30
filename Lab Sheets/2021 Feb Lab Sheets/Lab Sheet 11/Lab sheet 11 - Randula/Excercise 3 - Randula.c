//importing libraries
#include<stdio.h>

int main(void)
{
	//define array
	int A[5] = {10 , 20 , 30 , 40 , 50};
	int B[5] = {34 , 67 , 12 , 89 , 12};
	int C[5] = {0};
	//define variable
	int i;
	
	//calculate the multiplication of the array A and B and assign the answers to array C
	for (i = 0 ; i < 5 ; i++)
	{
		C[i] = A[i] * B[i];
	}
	
	//printf the array A
	printf("A = { ");
	for (i = 0 ; i < 5 ; i++)
	{
		printf("%d " , A[i]);
	}
	printf("}\n");
	
	//print the array B
	printf("B = { ");
	for (i = 0 ; i < 5 ; i++)
	{
		printf("%d " , B[i]);
	}
	printf("}\n");
	
	//print the array C
	printf("C = { ");
	for (i = 0 ; i < 5 ; i++)
	{
		printf("%d " , C[i]);
	}
	printf("}\n");
	
	return 0;
}
