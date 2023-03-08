#include <stdio.h>
int main()
{
	int arrNum[6];
	int i,j;
	
	printf("Enter values to the array :\n");
	
	for(i=0;i<5;i++)
	{
		scanf(" %d\n", &arrNum[i]);
	}
	
	for(i=0;i<6;i++)
	{
		if(arrNum[i] <= arrNum[i+1])
		{
			j = 1;	
		}	
		else
		{
			j = 0;
			
		}
	}
	
	if(j == 1)
	{
		printf("\nNumbers are stored in ascending order");
	}
	else
	{
		printf("Numbers are not stored in ascending order");
	}
	
	
	return 0;
}
