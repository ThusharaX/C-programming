#include<stdio.h>

//declaring structure
struct Book
{
	char bookId[5];
	char name[20];
	int NoOfCopies;
	int NoOfReaders;
}Book[3];


int main (void)
{
	//declaring variables
	int i , maxReadBook , maxReadNumber = 0;
	
	//taking user inputs
	for (i = 0 ; i < 3 ; i++)
	{
		printf("Enter Book ID : ");
		scanf("%s" , Book[i].bookId);
		
		printf("Enter Book Name : ");
		scanf("%s" , Book[i].name);
		
		printf("Enter No Of Copies : ");
		scanf("%d" , &Book[i].NoOfCopies);
		
		printf("Enter No Of Readers : ");
		scanf("%d" , &Book[i].NoOfReaders);
	
		printf("\n");
	}
	
	//diplaying user inputs
	for(i = 0 ; i < 3 ; i++)
	{
		printf("%s\t%s\t%d\t%d\n" , Book[i].bookId , Book[i].name , Book[i].NoOfCopies , Book[i].NoOfReaders);
	}
	printf("\n");
	
	//displaying the book name with the maximum number of readers
	for(i = 0 ; i < 3 ; i++)
	{
		if (Book[i].NoOfReaders > maxReadNumber)
		{
			maxReadNumber = Book[i].NoOfReaders;
			maxReadBook = i;
		}
	}
	printf("Name of the Book : %s\n" , Book[maxReadBook].name);
	printf("Number of Readers : %d\n" , maxReadNumber);
	
	
	
	return 0;
}
