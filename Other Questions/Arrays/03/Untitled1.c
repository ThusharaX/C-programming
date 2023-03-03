#include <stdio.h>
int main()
{
	int myArray[10];
	int i,sum = 0;
	float avg;
	
	for(i=0;i<10;i++)
	{
		printf("Enter a number :");
		scanf("%d",&myArray[i]);
		
		sum = sum + myArray[i];
	}
	avg = sum/10.0;
	
	printf("\n\nNumber series :");
	
	for(i=0;i<10;i++)
	{
		printf(" %d ",myArray[i]);
	}
	
	printf("\n\nAverage :%.2f\n",avg);
	
	printf("\nlarge Number :");
	
	for(i=00;i<10;i++)
	{
		if(myArray[i] > avg)
		{
			printf(" %d ", myArray[i]);
		}
	}
}
