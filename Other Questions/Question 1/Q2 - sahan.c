#include <stdio.h>
#include <string.h>

struct book{
	char title[12];
	int quantity;
	int reorderLevel;
}book[5];

int main ()
{
	int i, total, max, min;
	char maxName[12], minName[12];
	
	total = 0;
	
	for(i=0; i<5; ++i)
	{
		printf("Enter Book Title: ");
		scanf("%s", book[i].title);
		printf("Enter Quantity: ");
		scanf("%d", &book[i].quantity);
		printf("Enter the Reorder Level: ");
		scanf("%d", &book[i].reorderLevel);
		
		total += book[i].quantity;
		printf("\n");
	}
	
	printf("\nTotal number of books in the store: %d", total);
	
	max = book[0].quantity;
	min = book[0].quantity;
	
	printf("\nTitle of the books to be ordered: ");
	for (i=0; i<5; ++i)
	{
		if (max <= book[i].quantity)
		{
			max = book[i].quantity;
			strcpy(maxName, book[i].title);
		}
		
		if (min >= book[i].quantity)
		{
			min = book[i].quantity;
			strcpy(minName, book[i].title);
		}
		
		if (book[i].quantity < book[i].reorderLevel)
			printf("%s ", book[i].title);
	}
	printf("\nThe book with highest quantity: %s", maxName);
	printf("\nThe book with lowest quantity: %s", minName);
	
	return 0;
}
