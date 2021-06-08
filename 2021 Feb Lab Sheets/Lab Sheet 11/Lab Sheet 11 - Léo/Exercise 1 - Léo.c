#include <stdio.h>

int main()
{
	int x,facto=1;
	
	printf("Enter Number: ");
	scanf("%d",&x);
	
	printf("Factorial of %d is: ",x);

	while(x!=0)
	{
		facto *= x;
		x--;
	}
	
	printf("%d",facto);
}
