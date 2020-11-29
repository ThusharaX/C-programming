// Online Test2 - Version B - b

#include<stdio.h>

// function prototype
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount); 

// main function
int main(void)
{
	// variable declaration
	int noOfGuests;
	float chargePerGuest, discount, amountToBePaid;
	
	// input noOfGuests
	printf("Enter no of guests: ");
	scanf("%d", &noOfGuests);
	
	// input chargePerGuest
	printf("Enter charge per guest: ");
	scanf("%f", &chargePerGuest);
	
	// Get Discount Price
	discount = getDiscountPrice(noOfGuests, chargePerGuest); // function call
	printf("Discount: %.2f\n", discount);
	
	// Get Amount To Be Paid
	amountToBePaid = getAmount(noOfGuests, chargePerGuest, discount); // function call
	printf("Amount to be paid: %.2f\n", amountToBePaid);
	
    return 0;
}

// function initialization
float getDiscountPrice(int noOfGuests, float chargePerGuest) {
	float discount = 0;
	
	// check noOfGuests is more than 200.
	if (noOfGuests > 200) {
		discount = (noOfGuests * chargePerGuest) * 10 / 100;
	}
	
	return discount;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount) {
	float amountToBePaid = 0;
	
	amountToBePaid = (noOfGuests * chargePerGuest) - getDiscountPrice(noOfGuests, chargePerGuest); // function call
	
	return amountToBePaid;
}
