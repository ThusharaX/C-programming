#include <stdio.h>

// without arrays
int main() { // start the main
    int num = 1;
    while(num > 0) {
        printf("Enter Number : ");
        scanf("%d", &num);
        if (num > 0)
            printf("You Entered Number %d\n", num);
    }
    return 0;
}