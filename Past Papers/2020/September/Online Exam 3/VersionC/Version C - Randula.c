#include<stdio.h>

int main(void)
{
	//declaring arrays
	int myArray[10] , largeNum[10];
	
	//declaring variables
	int i , largeNo , lrgNo = 0;
	int total = 0;
	float average ;
	
	//taking user inputs
	for (i = 0 ; i < 10 ; i++)
	{
		printf("Enter a Number : ");
		scanf("%d" , myArray[i]);
	}
	
	//calculate total and average
	for (i = 0 ; i < 10 ; i++)
	{
		total += myArray[i];
	}
	average = (float) total / 10;
	
	printf("Average : %.1f\n" , average);
	
	//printing myArray
	printf("My Array : ");
	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d " , myArray[i]);
	}
	
	//assigning values to largeNum array
	for (i = 0 ; i < 10 ; i++)
	{
		if (myArray[i] > (int)average)
		{
			largeNum[lrgNo] = myArray[i];
			lrgNo++;
		}
	}
	printf("\n");
	
	//printing largeNum
	printf("largeNum : ");
	for (i = 0 ; i < lrgNo ; i++)
	{
		printf("%d " , largeNum[i]);
	}
	
	return 0;
}
