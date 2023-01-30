#include<stdio.h>

int main()
{	
	int num1, num2, total;
	
	printf("Enter Number 1 : ");
	scanf("%d", &num1);
	printf("Enter Number 2 : ");
	scanf("%d", &num2);
	
	total = num1 + num2;
	
	printf("Total : ");
	printf("%d", total);
	
	return 0;
}
