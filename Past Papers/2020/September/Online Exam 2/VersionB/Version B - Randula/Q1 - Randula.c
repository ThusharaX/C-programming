#include<stdio.h>

int main(void)
{
	int i , j , k = 0;
	
	for (i = 5 ; i >= 1 ; i--)
	{
		for (j = 1 ; j <= i ; j++)
		{
			printf("%c" , 97 + k);
		}
			k++;
		printf("\n");
	}
	
	
	return 0;
}
