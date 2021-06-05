#include <stdio.h>

int main()
{
	int fib[10];
	fib[0]=0;
	fib[1]=1;
	int i,res;
	
	for(i=2;i<=9;i++)
	{
		res = fib[i-2]+fib[i-1];
		fib[i] = res;
	}
	for(i=0;i<=9;i++)
	{
		printf("%d\t",fib[i]);
	}
}
