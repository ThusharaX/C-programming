
/*
Name: Shalinda Fernando
Date: 29/04/2022
Student ID: REDACTED
Group: REDACTED
*/


#include <stdio.h>

// Function prototypes: Tells the compiler we have the bellow functions used later in our code
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);


int main(void){
    
    // Variable Init
    int noOfGuests;
    float chargePerGuest, discount, totBill;

    // Prompt and get the required information from the user
    printf("Enter number of guests: ");
    scanf("%d", &noOfGuests);

    printf("Enter charge per guest: ");
    scanf("%f", &chargePerGuest);

    discount = getDiscountPrice(noOfGuests, chargePerGuest);    // Calculate Discount
    totBill = getAmount(noOfGuests, chargePerGuest, discount);  // Calculate Total Bill

    // Display the results to the user
    printf("Discount: %.2f\n", discount);
    printf("Amount to be paid: %.2f\n", totBill);

    return 0;
}


float getDiscountPrice(int noOfGuests, float chargePerGuest){
    if(noOfGuests > 200){
        // number of guests > 200: Then they're eligible for the discount 
        return (10.0 / 100.0) * (noOfGuests * chargePerGuest);
    }
    return 0;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount){
    return (noOfGuests * chargePerGuest) - discount;        // Calculate total bill
}