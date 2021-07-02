#include<stdio.h>

//define structure
struct pdct
{
	//define variables inside structure
	char productID[5];
	char name[20];
	float unitPrice;
	int quantity;
	
}Product[4];

//starting main method
int main (void)
{
	//define variables in main method
	int i;
	float totalAmount = 0 , amount = 0;;
	
	//taking inputs from the user
	
	for (i = 0 ; i < 4 ; i++)
	{
		printf("Enter Product's ID : ");
		scanf("%s" , Product[i].productID);
		
		printf("Enter Product's Name : ");
		scanf("%s" , Product[i].name);
		
		printf("Enter Product's Unit Price : ");
		scanf("%f" , &Product[i].unitPrice);
		
		printf("Enter Product's Quantity : ");
		scanf("%d" , &Product[i].quantity);
		
		printf("\n");
	}
	
	//display the head of the table
	printf("Product ID\tName\tAmount\n");
	
	//display product ID and name , Calculate and display amount
	for(i = 0 ; i < 4 ; i++)
	{
		amount = (float)Product[i].unitPrice * Product[i].quantity;
		
		printf("%s\t\t%s\t%.2f\n" , Product[i].productID , Product[i].name , amount);
		
		totalAmount += amount;
	}
	
	//display the total amount
	printf("Total Amount\t\t%.2f\n" , totalAmount);
	
	
	return 0;
}
