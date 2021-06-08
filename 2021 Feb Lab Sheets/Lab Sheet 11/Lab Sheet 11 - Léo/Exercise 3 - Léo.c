#include <stdio.h>

int main()
{
	int A[5]={10,20,30,40,50};
	int B[5]={34,67,12,89,12};
	int C[5],i;
	
	for(i=0;i<=4;i++)
	{
		C[i]=((A[i])*(B[i]));
	}
	
	printf("\nArray C= ");
	printf("{");
	for(i=0;i<=4;i++)
	{
		printf("%d",C[i]);
		if(i==4)
		{
			break;
		}
		printf(",");
	}
	printf("}\n");
}
