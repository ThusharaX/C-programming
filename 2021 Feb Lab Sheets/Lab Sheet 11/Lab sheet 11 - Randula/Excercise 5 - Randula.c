//importing libraries
#include<stdio.h>
#include<string.h>

//define calling function
void  convertToUpperCase (char a[ ], int size );

int main (void)
{
	//define variables
	char address[100];
	int length;

	strcpy(address , "SLIIT, New Kandy Road, Malabe");	//assigning the string by strcpy
	
	printf("Initiate - %s\n" , address);
	
	length = strlen(address); //getting the charactor amount by using strlen
	
	convertToUpperCase (address, length ); //call the function
	
	
	return 0;
}

//define called function
void  convertToUpperCase (char a[ ], int size )
{
	int i;
	//modify the string the to convert lower case letters to upper case letters
	printf("After Modifing - " );
	for (i = 0 ; i < size ; i++)
	{
		if (a[i] >= 97)
		{	
			printf("%c" , a[i] - 32);
		}
		else
		{
			printf("%c" , a[i]);
		}
	}
	
}
