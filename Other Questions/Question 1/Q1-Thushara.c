#include<stdio.h>
#include <assert.h>

float checkDiscount (int, char, float);

int main(void)
{
    char cardType, itemDes[100], choice = 'y';
    float itemPrice, totalBill = 0, itemPriceWithDis;
    int itemCount = 0;
    
    printf("Card Type : ");
    scanf(" %c", &cardType);
    switch(cardType) {
    	case 'V' :
        case 'v' :
        case 'P' :
        case 'p' :
        case 'S' :
        case 's' :
        	break;
    	default : {
			printf("Invalid Card type...!\n");
			main();
		}
    	
	}
    
    while (choice == 'Y' || choice == 'y') {
    	printf("Item Description : ");
    	scanf(" %s", &itemDes);
    	printf("Item Price : ");
    	scanf("%f", &itemPrice);
    	
    	// diagnostics function
    	assert(checkDiscount(4, 'S', 100.00) == 120.00);
    	assert(checkDiscount(5, 'S', 100.00) == 0.00);
    	
    	itemPriceWithDis = checkDiscount(itemCount, cardType, itemPrice);
    	itemCount++;
    	
    	printf("\n%d", itemCount);
    	printf("\nItem Description : %s", itemDes);
		printf("\nItem Price : %.2f", itemPrice);
		
		if (itemPriceWithDis != 0) {
    		totalBill += itemPriceWithDis;
    		printf("\nDiscounted Price : %.2f\n", itemPriceWithDis);
    	}
    	else {
    		totalBill += itemPrice;
    		printf("\nDiscounted Price : No Discount\n");
    	}
    	
    	printf("\nDo you want to add another item (y/n) : ");
    	scanf(" %c", &choice);
    	
    	if (choice == 'N' || choice == 'n')
    		break;
    	else if (choice == 'Y' || choice == 'y') {
    		printf("\n");
    		continue;
    	}
		else {
			printf("Invalid choice...!\n");
			return -1;
		}
	}
	
	printf("\nTotal Bill : %.2f", totalBill);

    return 0;
}

float checkDiscount (int itemCount, char cardType, float itemPrice) {
	float itemPriceWithDis;
	if ((cardType == 'V' || cardType == 'v') && itemCount < 2) {
		itemPriceWithDis = itemPrice + (itemPrice * 15 / 100);
	}
	else if ((cardType == 'P' || cardType == 'p') && itemCount < 5) {
		itemPriceWithDis = itemPrice + (itemPrice * 18 / 100);
	}
	else if ((cardType == 'S' || cardType == 's') && itemCount < 5) {
		itemPriceWithDis = itemPrice + (itemPrice * 20 / 100);
	}
	else
		itemPriceWithDis = 0;
	
	return itemPriceWithDis;
}


