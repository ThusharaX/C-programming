#include <stdio.h>

int main()
{
	int numArray[8];
	int i,j;
	j = 0;
	
	for(i=0;i<8;i++)
	{
		printf("Enter a number :");
		scanf("%d", &numArray[i]);
		
		if(numArray[i] >4 || numArray[i] < 1)
		{
			printf("Enter a valid number :");
			scanf("%d", &numArray[i]);
			
			while(numArray[i] >4 && numArray[i] < 1)
			{
				i = i-1;
				printf("Enter a valid number :");
				scanf("%d", &numArray[i]);
				
			}
		}
	}
	
	printf("\nNum Array :");
	
	for(i=0;i<8;i++)
	{
		printf(" %d ", numArray[i]);
	}
	
	
	
	for(i=0;i<8;i++)
	{
		if(numArray[i] == 1 && numArray[i+1] == 3)
		{
			j = j + 1;
		}
	}
	printf("\nNumber of times the pattern '1 3' appear  : %d",j);
}
