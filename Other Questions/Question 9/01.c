#include <stdio.h>

int main()
{
	int i,j;
	
	for(i=97;i<=101;i++)
	{
		for(j=101;j>=i;j--)
		{
			printf(" %c",i);
		}
		printf("\n");
	}
	return 0;
}
