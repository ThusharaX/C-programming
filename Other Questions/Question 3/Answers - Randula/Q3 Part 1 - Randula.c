#include<stdio.h>
#include<string.h>

int main ()
{
	//declaing variables
	char address[200];
	int i  , length;
	
	//taking user inputs
	printf("Input : ");
	gets(address);
	
	
	//getting the input's charactor length
	length = strlen(address);
	
	//print the output in different lines
	printf("Output : ");
	for (i = 0 ; i < length ; i++)
	{
		if (address[i] == ',')
		{
			printf(",\n\t ");
		}
		else
		{
			printf("%c" , address[i]);
		}
	}
	
	return 0;
}
