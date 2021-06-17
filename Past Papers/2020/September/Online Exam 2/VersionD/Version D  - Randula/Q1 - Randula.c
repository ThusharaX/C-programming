#include<stdio.h>

int main (void)
{
	int i, r, p, value = 1;
	
	for (i = 2; i >= value; i--) 
	{
		for (r = 2; r >= value; r--) 
		{
			for (p = 2; p >= value; p--) 
			{
				printf("[%d %d %d]\n", i, r, p);
			}
		}
	}
	
	return 0;
}
