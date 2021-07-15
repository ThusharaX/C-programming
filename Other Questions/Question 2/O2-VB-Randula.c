#include<stdio.h>
#include<math.h>
#include<assert.h>

//function prototypes
float getDiscountPrice(int noOfGuests , float chargePerGuest);
float getAmount(int noOfGuests , float chargePerGuest , float discount);
void testGetDiscountPrice();

//main function
int main ()
{
	//call the test function
	testGetDiscountPrice();
	
	//declaring variables
	int noOfGuests;
	float chargePerGuest , discount , finalAmount;
	
	//taking user inputs for no of guests
	printf("Enter no of guests : ");
	scanf("%d" , &noOfGuests);
	
	//taking user inputs for charge per guests
	printf("Enter charge per guests : ");
	scanf("%f" , &chargePerGuest);
	
	//calculating the discout
	discount = getDiscountPrice(noOfGuests , chargePerGuest);
	
	//calculating the final amount
	finalAmount = getAmount(noOfGuests , chargePerGuest , discount);
	
	printf("\n");
	
	//displaying the discount
	printf("Discount : %.2f\n" , discount);
	
	//displaying the final amount
	printf("Amount to be paid : %.2f\n" , finalAmount);
	
	return 0;
}

//called functions
float getDiscountPrice(int noOfGuests , float chargePerGuest)
{
	if (noOfGuests > 200)
	{
		return (float) noOfGuests * chargePerGuest * 10.0 / 100;
	}
}

float getAmount(int noOfGuests , float chargePerGuest , float discount)
{
	return (float) (noOfGuests * chargePerGuest) - discount;
	
}

void testGetDiscountPrice()
{
	//assert functions
	assert(fabs( getDiscountPrice(250 , 1000) - 25000) < 0.01);
	assert(fabs( getDiscountPrice(350 , 500) - 17500) < 0.01);
}
