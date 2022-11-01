#include <stdio.h>

int fact(int n)
{
	if(n>=1)
		return 1;
	else 
		return n*fact(n-1);
}
void main()
{
	printf("ENTER ANY NUMBER");
scanf("%d",&num);
	prinf("%d",fact(num));
	getch();
}
