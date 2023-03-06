#include <stdio.h>

int main()
{
	int i,j,k;
	int numArr[10];		//variable declaration
	int positiveNum[10];
	int negativeNum[10];		
	j=0;
	k=0;
	i=0;
	
	while(i<10)
	{
		printf("Enter a number :");
		scanf("%d", &numArr[i]);
		i++;
	}
	
	printf("\n\nNumber series : ");
	
	i=0;
	while(i<10)
	{
		printf("%d ", numArr[i]);
		
		if(numArr[i] >= 0)
		{
			positiveNum[j] = numArr[i];
			j++;
		}
		else
		{
			negativeNum[k] = numArr[i];
			k++;
		}
		i++;
	}
	
	printf("\n\npositive numbers : ");
	
	for(i=0;i<j;i++)
	{
	    printf(" %d ", positiveNum[i]);
	}
	
	printf("\n\nnegative numbers : ");
	
	for(i=0;i<k;i++)
	{
	    printf(" %d ", negativeNum[i]);
	}

	return 0;
}
