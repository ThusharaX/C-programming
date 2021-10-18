#include<stdio.h>
#include<assert.h>
#include<math.h>

//function prototypes
float calDiscount (int time , float totAmount);
void testcalDiscount();
void displayGift(float finalTot);

int main(void)
{
	int time , time_loop = -1;
	float total_amount , final_total , discount;
	
	testcalDiscount(); //call assert function
	
	//input Time
	while (time_loop == -1)
	{
		printf("Enter the time (24h) :");
		scanf("%d" , &time);
		
		if(time > 24 || time < 0)
		{
			printf("Invalid Time!!\nPlease Try Again!!\n");
		}
		else
		{
			time_loop++;
		}
	}
	
	printf("Enter the amount : ");
	scanf("%f" , &total_amount);
	
	discount = calDiscount (time , total_amount); //calling discount function
	
	final_total = total_amount - discount; //calculate final total
	
	printf("Final amount : Rs %.2f\n" , final_total); //print final total
	displayGift(final_total); //calling gift function
	
	return 0;
}

//called discount function
float calDiscount (int time , float totAmount)
{
	if (time >= 16 && time <= 19)
	{
		if (totAmount >= 5000)
		{
			return totAmount * 10 / 100;
		}
		else if (totAmount >= 2500)
		{
			return totAmount * 7 / 100;
		}
	}
	else if (time >= 20 && time <= 22)
	{
		if (totAmount >= 5000)
		{
			return totAmount * 12 / 100;
		}
		else if (totAmount >= 2500)
		{
			return totAmount * 9 / 100;
		}
	}
}
//called assert function
void testcalDiscount()
{
	assert(fabs(calDiscount(16 , 5000) - 500) < 0.01);
	assert(fabs(calDiscount(20 , 3000) - 270) < 0.01);	
}
//calling gift function
void displayGift(float finalTot)
{
 	printf("Gift - ");
 	if (finalTot >= 7000)
 	{
 		printf("Packet of Milk\n");
	}
	else if (finalTot >= 5000)
	{
		printf("1 kg of Suger\n");
	}
	else if (finalTot >= 3000)
	{
		printf("Pack of 6 Eggs\n");
	}
	else
	{
		printf("no\n");
	}
 	
}

