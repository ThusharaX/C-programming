#include<stdio.h>
#include<assert.h>
#include<math.h>

// function prototype
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);
void testGetDiscountPrice();

// main function
int main()
{	
	// declaring variables
	int noOfGuests;
	float chargePerGuest, discount = 0, amountToBePaid;
	
	// input no of guests & charge per guest
	printf("Enter no of Guests : ");
	scanf("%d", &noOfGuests);
	printf("Enter charge per guest : ");
	scanf("%f", &chargePerGuest);
	
	// calling debug function
	testGetDiscountPrice();
	
	// checking if noOfGuests >= 200
	if (noOfGuests >= 200) {
		// function call
		discount = getDiscountPrice(noOfGuests, chargePerGuest);
		printf("Discount : %.2f\n", discount);
	}
	else {
		printf("Discount : no discount\n");
	}
	
	// function call
	amountToBePaid = getAmount(noOfGuests, chargePerGuest, discount);
	
	// printing Amount to be paid
	printf("Amount to be paid : %.2f", amountToBePaid);
	
    return 0;
}

// function definition
float getDiscountPrice(int noOfGuests, float chargePerGuest) {
	float hotelCharge, discount;
	
	hotelCharge = noOfGuests * chargePerGuest;
	discount = hotelCharge * 10 / 100;
	
	return discount;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount) {
	float amountToBePaid;
	
	amountToBePaid = (noOfGuests * chargePerGuest) - discount;
	return amountToBePaid;
}

// debug function
void testGetDiscountPrice() {
	assert(fabs(getDiscountPrice(5, 1000.00) - 500) < 1);
	assert(fabs(getDiscountPrice(250, 1000.00) - 25000) < 1);
}





