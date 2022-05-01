
## Question

A hotel has decided to offer 10% discounts from hotel charge for the wedding packages during the festive season. Discount is valid only if the number of guests is more than 200.
(Hotel charge = number of guests * charge per guest).

You are asked to write a C program to calculate the discount for the wedding package by considering the number of guests. Function should return the discount. Function prototype is given below.

float getDiscountPrice(int noOfGuests, float chargePerGuest);

Write a function called getAmount() to calculate the amount to be paid. Function prototype is given below.
(Amount to be paid = (no of guests * charge per guest) – discount)).

float getAmount(int noOfGuests, float chargePerGuest, float discount);

In your main function read the number of guests and the charge per guest from keyboard and display the discount and the amount to be paid for wedding package using the functions created above, in the following format.

```
Enter number of guests:
Enter charge per guest:
Discount:
Amount to be paid:
```