#include <stdio.h>

// Structure
struct item {
    int itemNo;
    float price;
    int quantity;
} item1, item2;

// Main Function
int main(void) {

    // get item1 details
    printf("Enter item 1 itemNo: ");
    scanf("%d", &item1.itemNo);
    printf("Enter item 1 price: ");
    scanf("%f", &item1.price);
    printf("Enter item 1 quantity: ");
    scanf("%d", &item1.quantity);

    printf("\n"); // for blank line

    //get item2 details
    printf("Enter item 2 itemNo: ");
    scanf("%d", &item2.itemNo);
    printf("Enter item 2 price: ");
    scanf("%f", &item2.price);
    printf("Enter item 2 quantity: ");
    scanf("%d", &item2.quantity);

    printf("\n"); // for blank line

    // output
    printf("|%-9s|%-10s|%-11s|\n", "Item No", "Price", "Quantity");

    printf("|%9d|%10.2f|%11d|\n", item1.itemNo, item1.price , item1.quantity);
    printf("|%9d|%10.2f|%11d|\n", item2.itemNo, item2.price , item2.quantity);

    return 0;
} // end of main Function
