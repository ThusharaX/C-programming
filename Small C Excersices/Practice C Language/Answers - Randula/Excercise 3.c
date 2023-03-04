#include<stdio.h>

int main (void)
{
	int n , sum = 0 , i;
	
	printf("Enter a value for 'n' : ");
	scanf("%d" , &n);
	
	for (i = 1 ; i <= n ; i++)
	{
		sum += i;
	}
	
	printf("sum = %d\n" , sum);
	
	return 0;
}
