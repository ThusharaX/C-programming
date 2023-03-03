#include <stdio.h>

int main()
{
	int i,j,k;
	int numArr[6];		//variable declaration
	int oddNum[6];
	int evenNum[6];		
	
	int lengthj, lengthk;
	j=0;
	k=0;
	i=0;
	
	while(i<5)
	{
		printf("Enter a number :");
		scanf("%d", &numArr[i]);
		i++;
	}
	
	printf("\n\nNumber series : ");
	
	i=0;
	while(i<5)
	{
		printf("%d ", numArr[i]);
		
		if(numArr[i]%2 == 0)
		{
			evenNum[j] = numArr[i];
			j++;
		}
		else
		{
			oddNum[k] = numArr[i];
			k++;
		}
		i++;
	}
	
	printf("\n\nEven numbers : ");
	
	for(i=0;i<j;i++)
	{
	    printf(" %d ", evenNum[i]);
	}
	
	printf("\n\nOdd numbers : ");
	
	for(i=0;i<k;i++)
	{
	    printf(" %d ", oddNum[i]);
	}

	return 0;
}
