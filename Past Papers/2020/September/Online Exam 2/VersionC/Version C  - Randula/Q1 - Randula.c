#include<stdio.h>

int main (void)
{
	int i, r, p, value = 2;
	
	for (i = 1; i <= value; i++) 
	{
		for (r = 1; r <= value; r++) 
		{
			for (p = 1; p <= value; p++) 
			{
				printf("[%d %d %d]\n", i, r, p);
			}
		}
	}
	
	return 0;
}
