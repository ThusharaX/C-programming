#include<stdio.h>

//define structure array
struct bookShop
{
	char title[50];
	int quantity , bookReorderLevel;
}book[5];


int main (void)
{
	//declare variable
	int i , totalBooks = 0;
	int highestQuantity = 0 , highestBook;
	int lowestQuantity = 1000 , lowestBook;
	
	//taking user inputs about details of 5 books
	for (i = 0 ; i < 5 ; i++)
	{
		//taking user inputs about the book title
		printf("Enter Book Title : ");
		scanf("%s" , book[i].title);
		
		//taking user inputs about the book quantity
		printf("Enter Book Quantity : ");
		scanf("%d" , &book[i].quantity);
		
		//taking user inputs about the book reorder level
		printf("Enter Book Reorder Level : ");
		scanf("%d" , &book[i].bookReorderLevel);
		
		printf("\n");
	}
	
	//calculate and display the total number of books
	for (i = 0 ; i < 5 ; i++)
	{
		totalBooks += book[i].quantity;
	}
	printf("Total Number of Books in the Store : %d\n" , totalBooks);
	printf("\n");
	
	//select and display the books to be ordered
	printf("Books to be Ordered ::\n");
	for (i = 0 ; i < 5 ; i++)
	{
		if (book[i].quantity < book[i].bookReorderLevel)
		{
			printf("%s\n" , book[i].title);
		}
	}
	printf("\n");
	
	//select the title of the book with the highest quantity and the lowest quantity
	for (i = 0 ; i < 5 ; i++)
	{
		if (highestQuantity < book[i].quantity)
		{
			highestQuantity = book[i].quantity;
			highestBook = i;
		}
		
		if (lowestQuantity > book[i].quantity)
		{
			lowestQuantity = book[i].quantity;
			lowestBook = i;
		}
	}
	
	//print the title of the book with the highest quantity and lowest quantity
	printf("Title of the book with Highest Quantity : %s\n" , book[highestBook].title);
	printf("Title of the book with Lowest Quantity : %s\n" , book[lowestBook].title);
	
	return 0;
}
