#include<stdio.h>

float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount); 

int main(void)
{
	int guests;
	float charge , discount , total;
	
	printf("Enter no of Guests : ");
	scanf("%d" , &guests);
	
	printf("Enter charge per Guest : ");
	scanf("%f" , &charge);
	
	discount = getDiscountPrice(guests , charge);
	
	total = getAmount(guests , charge , discount);
	
	printf("Discount : %.2f\n" , discount);
	printf("Amount to be paid : %.2f\n" , total);
	
	return 0;
}

float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
	float discount = 0;
	
	if(noOfGuests > 200)
	{
		discount = (noOfGuests * chargePerGuest) * 10.0 / 100;
	}
	
	return discount;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
	float total = 0;
	
	total = (float) (noOfGuests * chargePerGuest) - discount;
	
	return total;
}
