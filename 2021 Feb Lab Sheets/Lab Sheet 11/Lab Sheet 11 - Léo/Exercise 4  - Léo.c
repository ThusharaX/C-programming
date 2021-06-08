#include <stdio.h>
#include <string.h>
int main()
{
	char name[20];		
	int len,i;

	printf("Enter the name: ");
	scanf("%s",name);
	len = strlen(name);
	
	printf("\nName in backwards: ");
	for(i=0;i<=len-1;i++)
	{
		printf("%c",name[(len-1)-i]);
	}
	
	return 0;
}
