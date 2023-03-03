#include <stdio.h>
int main()
{
	int i,j,k;    //variable declaration
	
	for(i=2;i>=1;i--)
	{
		for(j=2;j>=1;j--)
		{
			for(k=2;k>=1;k--)
			{
				printf("[%d %d %d]\n",i,j,k);
			}
		}
	}
	return 0;
}
