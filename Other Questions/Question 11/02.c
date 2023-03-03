#include <stdio.h>

float calculatetotalcost(int itemno, float quantity);				//function prototype
void printdetails(int itemno, float quantity, float totalcost);
int main()
{
	int itemno;						//varable declaration
	float quantity, totalcost;
	
	printf("Enter your item no. :");		//get user inputs
	scanf("%d", &itemno);
	
	printf("Enter quantity :");
	scanf("%f", &quantity);
	
	totalcost = calculatetotalcost(itemno, quantity);		//call the function
	
	printdetails(itemno, quantity, totalcost);
	
	return 0;
	
}

float calculatetotalcost(int itemno, float quantity)			//called function
{
	float totalcost;
	float unitprice;
	if(itemno == 1)
	{
		unitprice = 100;
	}
	else if(itemno == 2)
	{
		unitprice = 200;
	}
	else if(itemno == 3)
	{
		unitprice = 300;
	}
	else
	{
		printf("\nInvalid item no----------\n");
	}
	
	totalcost = quantity * unitprice;
	
	return totalcost;
}

void printdetails(int itemno, float quantity, float totalcost)
{

	
	printf("\nItem No. : %d\nQuantity : %.2f\nTotal cost : %.2f",itemno,quantity, totalcost);
	return ;
}
