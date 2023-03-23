#include <stdio.h>

int main()
{
	int Arr1[3][3];
	int Arr2[3][3];
	int i,j;
	
	printf("Enter values to the matrix1 : \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &Arr1[i][j]);
		}
		
	}
	
	printf("\n\nEnter values to the matrix2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &Arr2[i][j]);
		}
		
	}
	
	printf("\n\nMatrix subtraction :\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d ",(Arr1[i][j] - Arr2[i][j]));
		}
		printf("\n");
	}
	return 0;
}
