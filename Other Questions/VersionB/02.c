#include <stdio.h>

float getdiscountprice(int noofguests, float chargeperguest);           //function prototype
float getamount(int noofguests, float chargeperguest, float discount);

int main()
{
	int noofguests;   //variable declaration
	float chargeperguest, discount,amount;
	
	printf("Enter number of guests :");   //get user inputs
	scanf("%d", &noofguests);
	
	printf("Enter charge per guest :");
	scanf("%f", &chargeperguest);
	
	discount = getdiscountprice(noofguests, chargeperguest);
	
	printf("Discount : %.2f\n", discount);
	
	amount = getamount(noofguests, chargeperguest, discount);
	
	printf("Amount to be paid : %.2f\n", amount);
	
	return 0;
}

float getdiscountprice(int noofguests, float chargeperguest)
{
	float discount, hotelcharge;
	
	hotelcharge = noofguests * chargeperguest;
	
	if(noofguests > 200)
	{
		discount = hotelcharge * 10/100.0;
	}
	else
	{
		discount = 0;
	}
	return discount;
}

float getamount(int noofguests, float chargeperguest, float discount)
{
	float hotelcharge,amount;
	hotelcharge = noofguests * chargeperguest;
	
	amount = hotelcharge - discount;
	return amount;
}
