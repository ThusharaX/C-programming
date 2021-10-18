#include<stdio.h>

int main(void)
{
	int fib[10] , i , store;
	
	fib[0] = 0;
	fib[1] = 1;
	
	for (i = 2 ; i <= 10 ; i++)
	{
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	
	for (i = 2 ; i <= 10 ; i++)
	{
		printf("Fib[%d] = Fib[%d] + Fib[%d]\t" , i , i - 2 , i - 1);
		printf("%d = %d + %d\n" , fib[i] , fib[i - 2] , fib[i - 1]);
		printf("\n");
	}
	
	return 0;
}
