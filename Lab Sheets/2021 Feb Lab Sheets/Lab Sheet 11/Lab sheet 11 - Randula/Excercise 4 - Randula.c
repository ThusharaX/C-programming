//importing libraries
#include<stdio.h>
#include<string.h>

int main (void)
{
	char input[20];
	int i , length;
	
	printf("Enter a Name : "); //prompt
	scanf("%s" , input); //assign the type string to the variable
	
	
	length = strlen(input); //get the charator amount of the user entered string
	
	//check whether the length in less than 20 or not
	if (length > 20)
	{
		printf("Error!!\n");
	}
	else
	{
		//printng the string backwords
		for (i = 0 ; i <= length ; i++)
		{
			printf("%c" , input[length - i]);
		}
	}
	return 0;
}
